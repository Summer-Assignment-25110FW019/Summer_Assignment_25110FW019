// WAP to generate fibonacci series
#include <stdio.h>
int main() {
    int a=0,b=1,c,n,i;
    printf("Enter number of terms:");
    scanf("%d",&n);
    printf("fibonacci series upto %d terms is\n",n);
    printf(" %d %d ", a, b);
    for(i=1;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
        printf("%d ", c);
    }
    return 0;
}
