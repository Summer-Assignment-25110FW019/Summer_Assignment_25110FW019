//WAP to create bank account system
#include <stdio.h>
#include <stdlib.h>
struct Account{
    int accNo;
    char name[50];
    float balance;
};
void createAccount(){
    FILE *fp;
    struct Account a;
    fp = fopen("bank.txt", "a");
    printf("Enter Account Number: ");
    scanf("%d", &a.accNo);
    printf("Enter Account Holder Name: ");
    scanf("%s", a.name);
    printf("Enter Initial Balance: ");
    scanf("%f", &a.balance);
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
    printf("Account Created Successfully!\n");
}
void displayAccounts(){
    FILE *fp;
    struct Account a;
    fp = fopen("bank.txt", "rb");
    if(fp == NULL){
        printf("No Records Found!\n");
        return;
    }
    printf("\n----- Account Records -----\n");
    while(fread(&a, sizeof(a), 1, fp)){
        printf("\nAccount No : %d", a.accNo);
        printf("\nName       : %s", a.name);
        printf("\nBalance    : %.2f\n", a.balance);
    }
    fclose(fp);
}
void checkBalance(){
    FILE *fp;
    struct Account a;
    int accNo, found = 0;
    fp = fopen("bank.txt", "rb");
    printf("Enter Account Number: ");
    scanf("%d", &accNo);
    while(fread(&a, sizeof(a), 1, fp)){
        if(a.accNo == accNo){
            printf("Current Balance = %.2f\n", a.balance);
            found = 1;
            break;
        }
    }
    if(found == 0)
        printf("Account Not Found!\n");
        fclose(fp);
}
int main(){
    int choice;
    do{
        printf("\n\n===== BANK ACCOUNT SYSTEM =====");
        printf("\n1. Create Account");
        printf("\n2. Display Accounts");
        printf("\n3. Check Balance");
        printf("\n4. Exit");

        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                createAccount();
                break;

            case 2:
                displayAccounts();
                break;

            case 3:
                checkBalance();
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}
