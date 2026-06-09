// WAP to print character pyramid
#include <stdio.h>
int main() {
    int n;
    char i, j, k;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<=n-i-1;j++){
            printf("  ");
        }
        for(k=0;k<=i;k++){
            printf("%c ",'A'+k);
        }
        for(k=i-1;k>=0;k--){
            printf("%c ",'A'+k);
        }
        printf("\n");
    }
    return 0;
}
