// WAP to print largest prime factor
#include <stdio.h>
int main() {
    int i,n, largestPF=1;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        while(n%i==0){
            largestPF=i;
            n=n/i;
        }
    }
    printf("Largest prime factor is %d\n",largestPF);
    return 0;
}
