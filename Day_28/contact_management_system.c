//WAP to create contact management system
#include <stdio.h>
#include <stdlib.h>
struct Contact{
    char name[50];
    char phone[15];
};
void addContact(){
    FILE *fp;
    struct Contact c;
    fp = fopen("contacts.dat", "ab");
    printf("Enter Name: ");
    scanf("%s", c.name);
    printf("Enter Phone Number: ");
    scanf("%s", c.phone);
    fwrite(&c, sizeof(c), 1, fp);
    fclose(fp);
    printf("Contact Saved Successfully!\n");
}
void viewContacts(){
    FILE *fp;
    struct Contact c;
    fp = fopen("contacts.dat", "rb");
    if(fp == NULL){
        printf("No Contacts Found!\n");
        return;
    }
    printf("\n----- Contact List -----\n");
    while(fread(&c, sizeof(c), 1, fp)){
        printf("\nName  : %s", c.name);
        printf("\nPhone : %s\n", c.phone);
    }
    fclose(fp);
}
void searchContact(){
    FILE *fp;
    struct Contact c;
    char phone[15];
    int found = 0;
    fp = fopen("contacts.dat", "rb");
    if(fp == NULL){
        printf("No Contacts Found!\n");
        return;
    }
    printf("Enter Phone Number to Search: ");
    scanf("%s", phone);
    while(fread(&c, sizeof(c), 1, fp)){
        if(strcmp(c.phone, phone) == 0){
            printf("\nContact Found\n");
            printf("Name  : %s\n", c.name);
            printf("Phone : %s\n", c.phone);

            found = 1;
            break;
        }
    }
    if(found == 0)
        printf("Contact Not Found!\n");
        fclose(fp);
}
int main(){
    int choice;
    do{
        printf("\n\n===== CONTACT MANAGEMENT SYSTEM =====");
        printf("\n1. Add Contact");
        printf("\n2. View Contacts");
        printf("\n3. Search Contact");
        printf("\n4. Exit");

        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                addContact();
                break;

            case 2:
                viewContacts();
                break;

            case 3:
                searchContact();
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);
    return 0;
}
