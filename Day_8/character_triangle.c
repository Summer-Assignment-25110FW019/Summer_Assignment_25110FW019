// WAP to print character triangle
#include <stdio.h>
int main(){
    int n;
    char i,j;
    printf("Enter number of rows:");
    scanf("%d", &n);
    for(i='A';i<'A'+n;i++){
        for(j='A';j<=i;j++){
            printf("%c ", j);
        }
        printf("\n");
    }
    return 0;
}
