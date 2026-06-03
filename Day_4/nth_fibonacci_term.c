// WAP to find nth fibonacci term
#include <stdio.h>
int main() {
    int a=0,b=1,c,n,i;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    if(n<=0){
        printf("Enter a positive integer greater than 0.\n");
    }
    else if(n==1){
    printf("The %dth fibonacci term is %d\n", n, a);
    }
    else if(n==2){
    printf("The %dth fibonacci term is %d\n", n, b);
    }
    else{
    for(i=3;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
        printf("The %dth fibonacci term is %d", n, c);
    }
    return 0;
}
