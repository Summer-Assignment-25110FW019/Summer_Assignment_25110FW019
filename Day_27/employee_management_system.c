//Wap to create employee management system
#include <stdio.h>
struct Employee{
    int id;
    char name[50];
    float salary;
};
int main(){
    FILE *fp;
    struct Employee e;
    int n,i;
    fp=fopen("employee.txt", "w");
    printf("Enter number of employees: ");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        printf("\nEnter Employee %d Details\n",i+1);

        printf("Employee ID: ");
        scanf("%d",&e.id);

        printf("Employee Name: ");
        scanf("%s",e.name);

        printf("Salary: ");
        scanf("%f",&e.salary);

        fprintf(fp, "%d %s %.2f\n",
                e.id,e.name,e.salary);
    }
    fclose(fp);
    fp=fopen("employee.txt", "r");
    printf("\n\n--- Employee Records ---\n");
    while(fscanf(fp, "%d %s %f",
                 &e.id,e.name,&e.salary) != EOF){
        printf("\nEmployee ID : %d", e.id);
        printf("\nName        : %s", e.name);
        printf("\nSalary      : %.2f\n", e.salary);
    }
    fclose(fp);
    return 0;
}
