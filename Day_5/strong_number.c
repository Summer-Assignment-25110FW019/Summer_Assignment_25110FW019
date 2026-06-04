// WAP to check strong number
#include <stdio.h>
int main() {
    int i,n,sum=0,rem,temp,fact;
    printf("Enter a number:");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        rem=n%10;
        fact=1;
        for(i=1;i<=rem;i++){
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;
    }
    if(temp==sum){
        printf("This is a strong number.\n");
    }
    else{
        printf("This is not a strong number.\n");
    }
    return 0;
}
