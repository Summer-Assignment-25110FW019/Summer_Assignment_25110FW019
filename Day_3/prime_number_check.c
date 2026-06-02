// WAP to check whether a number is prime or not
#include <stdio.h>
int main() {
    int n,i,a;
    printf("Enter a number:");
    scanf("%d",&n);
    a=0;
    for(i=2;i<=n-1;i++){
        if(n%i==0){
        a=1;
        break;
        }
    }
    if(n==1)
    printf("1 is neither prime nor composite\n");
    if(a==0)
    printf("the given number is prime\n");
    else
    printf("the given number is composite");
    return 0;
}
