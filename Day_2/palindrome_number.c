// WAP to check whether a number is palindrome
#include <stdio.h>
int main() {
    int n,rev=0,original;
    printf("Enter the number:");
    scanf("%d",&n);
    original=n;
    while(n!=0){
        rev=rev*10;
        rev=rev+(n%10);
        n=n/10;
    }
    if(rev==original){
        printf("palindrome\n");
    }
    else{
    printf("not palindrome\n");
    }
    return 0;
}
