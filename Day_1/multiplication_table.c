// WAP to print multiplication table of a given number
#include <stdio.h>
int main(){
    int i,N;
    printf("Enter the value of N:");
    scanf("%d",&N);
    for(i=1;i<=10;i++){
        printf("%d×%d=%d \n",N,i,N*i);
    }
    return 0;
}
