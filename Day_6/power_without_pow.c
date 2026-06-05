// WAP to Find x^n without pow(). 
#include <stdio.h>
int main(){
    int x,n,i,product=1;
    printf("Enter x: ");
    scanf("%d",&x);
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        product=product*x;
    }
    printf("The value of x^n is : %d",product);
    return 0;
}
