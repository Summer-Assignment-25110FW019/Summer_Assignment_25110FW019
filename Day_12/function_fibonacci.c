// WAP to write function for fibonacci
#include <stdio.h>
void fibonacci(int x){
    int a=0,b=1,c,i;
    printf("%d %d ",a,b);
    for(i=3;i<=x;i++){
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    
}
int main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}
