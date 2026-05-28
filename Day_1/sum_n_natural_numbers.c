// WAP to calculte the sum of N natural numbers
#include <stdio.h>
int main(){
    int N, i,sum=0;
    printf("Enter the value of n:");
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        sum=sum+i;
    }
    printf("sum of first %d number is %d",N,sum);
    return 0;
}
