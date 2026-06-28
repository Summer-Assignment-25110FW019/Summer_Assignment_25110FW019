//WAP to create inventory management system
#include <stdio.h>
#include <stdlib.h>
struct Product{
    int id;
    char name[50];
    int quantity;
    float price;
};
void addProduct(){
    FILE *fp;
    struct Product p;

    fp = fopen("inventory.dat", "ab");

    printf("Enter Product ID: ");
    scanf("%d", &p.id);

    printf("Enter Product Name: ");
    scanf("%s", p.name);

    printf("Enter Quantity: ");
    scanf("%d", &p.quantity);

    printf("Enter Price: ");
    scanf("%f", &p.price);

    fwrite(&p, sizeof(p), 1, fp);

    fclose(fp);

    printf("Product Added Successfully!\n");
}
void viewProducts(){
    FILE *fp;
    struct Product p;

    fp = fopen("inventory.dat", "rb");

    if(fp == NULL){
        printf("No Records Found!\n");
        return;
    }

    printf("\n----- Product List -----\n");

    while(fread(&p, sizeof(p), 1, fp)){
        printf("\nProduct ID : %d", p.id);
        printf("\nName       : %s", p.name);
        printf("\nQuantity   : %d", p.quantity);
        printf("\nPrice      : %.2f\n", p.price);
    }

    fclose(fp);
}
void searchProduct(){
    FILE *fp;
    struct Product p;
    int id, found = 0;

    fp = fopen("inventory.dat", "rb");

    if(fp == NULL){
        printf("No Records Found!\n");
        return;
    }
    printf("Enter Product ID to Search: ");
    scanf("%d", &id);

    while(fread(&p, sizeof(p), 1, fp)){
        if(p.id == id){
            printf("\nProduct Found\n");
            printf("ID       : %d\n", p.id);
            printf("Name     : %s\n", p.name);
            printf("Quantity : %d\n", p.quantity);
            printf("Price    : %.2f\n", p.price);

            found = 1;
            break;
        }
    }
    if(found == 0)
        printf("Product Not Found!\n");
        fclose(fp);
}
int main(){
    int choice;
    do{
        printf("\n===== INVENTORY MANAGEMENT SYSTEM =====");
        printf("\n1. Add Product");
        printf("\n2. View Products");
        printf("\n3. Search Product");
        printf("\n4. Exit");

        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                addProduct();
                break;

            case 2:
                viewProducts();
                break;

            case 3:
                searchProduct();
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
