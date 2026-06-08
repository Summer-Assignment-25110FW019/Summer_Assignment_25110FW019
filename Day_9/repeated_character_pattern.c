// WAP to print repeated character pattern
#include <stdio.h>
int main() {
    int n;
    char i, j;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for(i='A';i<'A'+n;i++){
        for(j='A';j<=i;j++){
        printf("%c ",i);
        }
        printf("\n");
    }
    return 0;
}
