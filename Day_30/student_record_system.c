#include<stdio.h>

int main()
{
    int roll[100], n, i;
    char name[100][50];
    float marks[100];

    printf("Enter number of students: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nStudent %d\n",i+1);

        printf("Enter Roll No: ");
        scanf("%d",&roll[i]);

        printf("Enter Name: ");
        scanf("%s",name[i]);

        printf("Enter Marks: ");
        scanf("%f",&marks[i]);
    }

    printf("\n-----Student Records-----\n");

    for(i=0;i<n;i++)
    {
        printf("\nRoll No : %d",roll[i]);
        printf("\nName    : %s",name[i]);
        printf("\nMarks   : %.2f\n",marks[i]);
    }

    return 0;
}
