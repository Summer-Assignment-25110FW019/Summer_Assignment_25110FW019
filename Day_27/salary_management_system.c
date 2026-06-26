//WAP to create salary management system
#include <stdio.h>
struct Employee{
    int id;
    char name[50];
    float basic,hra,da,total;
};
int main(){
    FILE *fp;
    struct Employee e;
    int n,i;
    fp = fopen("salary.txt", "w");
    printf("Enter number of employees: ");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        printf("\nEmployee %d\n",i+1);

        printf("Enter ID: ");
        scanf("%d",&e.id);

        printf("Enter Name: ");
        scanf("%s",e.name);

        printf("Enter Basic Salary: ");
        scanf("%f",&e.basic);

        e.hra = e.basic * 0.20;
        e.da = e.basic * 0.10;
        e.total = e.basic + e.hra + e.da;
        fprintf(fp, "%d %s %.2f %.2f %.2f %.2f\n",
                e.id, e.name, e.basic,
                e.hra, e.da, e.total);
    }
    fclose(fp);
    fp = fopen("salary.txt", "r");
    printf("\n\n----- Salary Report -----\n");
    while(fscanf(fp, "%d %s %f %f %f %f",
                 &e.id, e.name,
                 &e.basic, &e.hra,
                 &e.da, &e.total) != EOF){
        printf("\nID          : %d", e.id);
        printf("\nName        : %s", e.name);
        printf("\nBasic Salary: %.2f", e.basic);
        printf("\nHRA         : %.2f", e.hra);
        printf("\nDA          : %.2f", e.da);
        printf("\nTotal Salary: %.2f\n", e.total);
    }
    fclose(fp);
    return 0;
}
