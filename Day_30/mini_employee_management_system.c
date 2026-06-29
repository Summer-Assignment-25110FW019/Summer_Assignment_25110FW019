#include<stdio.h>

int main()
{
    int id[100], n, i;
    char name[100][50];
    float salary[100];

    printf("Enter number of employees: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEmployee %d\n",i+1);

        printf("Employee ID: ");
        scanf("%d",&id[i]);

        printf("Employee Name: ");
        scanf("%s",name[i]);

        printf("Salary: ");
        scanf("%f",&salary[i]);
    }

    printf("\n-----Employee Records-----\n");

    for(i=0;i<n;i++)
    {
        printf("\nID : %d",id[i]);
        printf("\nName : %s",name[i]);
        printf("\nSalary : %.2f\n",salary[i]);
    }

    return 0;
}
