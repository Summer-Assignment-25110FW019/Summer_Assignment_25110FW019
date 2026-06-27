//WAP to create library management system
#include <stdio.h>
#include <stdlib.h>
struct Book{
    int id;
    char title[50];
    char author[50];
};
void addBook(){
    FILE *fp;
    struct Book b;
    fp = fopen("library.txt", "a");
    printf("Enter Book ID: ");
    scanf("%d", &b.id);
    printf("Enter Book Title: ");
    scanf("%s", b.title);
    printf("Enter Author Name: ");
    scanf("%s", b.author);
    fprintf(fp, "%d %s %s\n", b.id, b.title, b.author);
    fclose(fp);
    printf("Book Added Successfully!\n");
}
void displayBooks(){
    FILE *fp;
    struct Book b;
    fp = fopen("library.txt", "r");
    if(fp == NULL){
        printf("No records found!\n");
        return;
    }
    printf("\n----- Book Records -----\n");
    while(fscanf(fp, "%d %s %s",
                 &b.id, b.title, b.author) != EOF){
        printf("\nBook ID : %d", b.id);
        printf("\nTitle   : %s", b.title);
        printf("\nAuthor  : %s\n", b.author);
    }
    fclose(fp);
}
void searchBook(){
    FILE *fp;
    struct Book b;
    int id, found = 0;
    fp = fopen("library.txt", "r");
    if(fp == NULL){
        printf("No records found!\n");
        return;
    }
    printf("Enter Book ID to Search: ");
    scanf("%d", &id);
    while(fscanf(fp, "%d %s %s",
                 &b.id, b.title, b.author) != EOF){
        if(b.id == id){
            printf("\nBook Found\n");
            printf("Book ID : %d\n", b.id);
            printf("Title   : %s\n", b.title);
            printf("Author  : %s\n", b.author);
            found = 1;
            break;
        }
    }
    if(found == 0)
        printf("Book Not Found!\n");
        fclose(fp);
}
int main(){
    int choice;
    do{
        printf("\n\n===== LIBRARY MANAGEMENT SYSTEM =====");
        printf("\n1. Add Book");
        printf("\n2. Display Books");
        printf("\n3. Search Book");
        printf("\n4. Exit");
        printf("\nEnter Choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
                break;

            case 3:
                searchBook();
                break;

            case 4:
                printf("Exiting...");
                break;

            default:
                printf("Invalid Choice!");
        }

    }while(choice != 4);
    return 0;
}
