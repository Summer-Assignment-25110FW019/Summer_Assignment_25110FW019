// WAP to find product of digits
#include <stdio.h>
int main() {
    int n,prd=1,lastdigit;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n!=0){
        lastdigit=n%10;
        prd=prd*lastdigit;
        n=n/10;
    }
printf("product of digits is %d",prd);
    return 0;
}
