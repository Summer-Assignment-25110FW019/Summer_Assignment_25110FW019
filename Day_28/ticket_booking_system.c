//WAP to create ticket booking system
#include <stdio.h>
#include <stdlib.h>
struct Ticket{
    int ticketNo;
    char name[50];
    int seats;
};
void bookTicket(){
    FILE *fp;
    struct Ticket t;
    fp = fopen("ticket.dat", "ab");
    printf("Enter Ticket Number: ");
    scanf("%d", &t.ticketNo);
    printf("Enter Passenger Name: ");
    scanf("%s", t.name);
    printf("Enter Number of Seats: ");
    scanf("%d", &t.seats);
    fwrite(&t, sizeof(t), 1, fp);
    fclose(fp);
    printf("Ticket Booked Successfully!\n");
}
void viewBookings(){
    FILE *fp;
    struct Ticket t;
    fp = fopen("ticket.dat", "rb");
    if(fp == NULL){
        printf("No Bookings Found!\n");
        return;
    }
    printf("\n----- Ticket Bookings -----\n");
    while(fread(&t, sizeof(t), 1, fp)){
        printf("\nTicket No : %d", t.ticketNo);
        printf("\nName      : %s", t.name);
        printf("\nSeats     : %d\n", t.seats);
    }
    fclose(fp);
}
void searchTicket(){
    FILE *fp;
    struct Ticket t;
    int ticketNo, found = 0;
    fp = fopen("ticket.dat", "rb");
    if(fp == NULL){
        printf("No Records Found!\n");
        return;
    }
    printf("Enter Ticket Number: ");
    scanf("%d", &ticketNo);
    while(fread(&t, sizeof(t), 1, fp)){
        if(t.ticketNo == ticketNo){
            printf("\nTicket Found\n");
            printf("Ticket No : %d\n", t.ticketNo);
            printf("Name      : %s\n", t.name);
            printf("Seats     : %d\n", t.seats);

            found = 1;
            break;
        }
    }
    if(found == 0)
        printf("Ticket Not Found!\n");
        fclose(fp);
}
int main(){
    int choice;
    do{
        printf("\n\n===== TICKET BOOKING SYSTEM =====");
        printf("\n1. Book Ticket");
        printf("\n2. View Bookings");
        printf("\n3. Search Ticket");
        printf("\n4. Exit");

        printf("\nEnter Choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                bookTicket();
                break;

            case 2:
                viewBookings();
                break;

            case 3:
                searchTicket();
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
