//WAP to create marksheet generation system
#include <stdio.h>
struct Student{
    int roll;
    char name[50];
    float m1,m2,m3,m4,m5;
    float total,percentage;
    char grade;
};
int main(){
    FILE *fp;
    struct Student s;
    int n,i;

    fp = fopen("marksheet.txt", "w");
    printf("Enter number of students: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll No: ");
        scanf("%d",&s.roll);

        printf("Name: ");
        scanf("%s",s.name);

        printf("Marks in 5 Subjects: ");
        scanf("%f %f %f %f %f",
              &s.m1, &s.m2, &s.m3, &s.m4, &s.m5);

        s.total = s.m1+s.m2+s.m3+s.m4+s.m5;
        s.percentage = s.total/5;

        if(s.percentage >= 90)
            s.grade = 'A';
        else if(s.percentage >= 75)
            s.grade = 'B';
        else if(s.percentage >= 60)
            s.grade = 'C';
        else if(s.percentage >= 40)
            s.grade = 'D';
        else
            s.grade = 'F';

        fprintf(fp, "%d %s %.2f %.2f %.2f %.2f %.2f %.2f %.2f %c\n",
                s.roll, s.name,
                s.m1, s.m2, s.m3, s.m4, s.m5,
                s.total, s.percentage, s.grade);
    }
    fclose(fp);
    fp = fopen("marksheet.txt", "r");
    printf("\n\n===== MARKSHEET =====\n");
    while(fscanf(fp, "%d %s %f %f %f %f %f %f %f %c",
                 &s.roll, s.name,
                 &s.m1, &s.m2, &s.m3, &s.m4, &s.m5,
                 &s.total, &s.percentage, &s.grade) != EOF){
        printf("\nRoll No    : %d", s.roll);
        printf("\nName       : %s", s.name);
        printf("\nTotal      : %.2f", s.total);
        printf("\nPercentage : %.2f%%", s.percentage);
        printf("\nGrade      : %c\n", s.grade);
    }
    fclose(fp);
    return 0;
}
