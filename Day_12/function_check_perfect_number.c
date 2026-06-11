// WAP to write function for perfect number
#include <stdio.h>
int perfect(int x){
    int i,sum=0;
    for(i=1;i<x;i++){
        if(x%i==0){
            sum=sum+i;
        }
    }
    if(sum==x)
        return 1;
    else
        return 0;
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(perfect(n))
        printf("Perfect number\n");
    else
        printf("Not Perfect number\n");
    return 0;
}
