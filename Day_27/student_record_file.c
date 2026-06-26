//WAP to create student record management system
#include <stdio.h>
struct Student{
    int roll;
    char name[50];
    float marks;
};
int main(){
    FILE *fp;
    struct Student s;
    int n,i;

    fp=fopen("student.txt", "w");
    printf("Enter number of students: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\nEnter Student %d Details\n",i+1);
        printf("Roll No: ");
        scanf("%d",&s.roll);

        printf("Name: ");
        scanf("%s",s.name);

        printf("Marks: ");
        scanf("%f",&s.marks);

        fprintf(fp, "%d %s %.2f\n",
                s.roll,s.name,s.marks);
    }
    fclose(fp);
    fp=fopen("student.txt", "r");
    printf("\n\n--- Student Records ---\n");
    while(fscanf(fp, "%d %s %f",
                 &s.roll, s.name, &s.marks) != EOF){
        printf("\nRoll No : %d",s.roll);
        printf("\nName    : %s",s.name);
        printf("\nMarks   : %.2f\n",s.marks);
    }
    fclose(fp);
    return 0;
}
