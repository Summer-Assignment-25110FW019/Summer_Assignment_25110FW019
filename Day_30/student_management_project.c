#include<stdio.h>

int roll[100], n;
char name[100][50];
float marks[100];

void input()
{
    int i;

    printf("Enter number of students: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nStudent %d\n",i+1);

        printf("Roll No: ");
        scanf("%d",&roll[i]);

        printf("Name: ");
        scanf("%s",name[i]);

        printf("Marks: ");
        scanf("%f",&marks[i]);
    }
}

void display()
{
    int i;

    printf("\n-----Student Records-----\n");

    for(i=0;i<n;i++)
    {
        printf("\nRoll No : %d",roll[i]);
        printf("\nName : %s",name[i]);
        printf("\nMarks : %.2f\n",marks[i]);
    }
}

int main()
{
    input();
    display();

    return 0;
}
