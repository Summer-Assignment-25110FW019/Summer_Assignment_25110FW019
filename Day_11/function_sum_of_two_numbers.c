// WAP to write function to find sum of two numbers
#include <stdio.h>
int sum(int x, int y){
    return x+y;
}
int main() {
    int a,b;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    int add=sum(a,b);
    printf("sum of two numbers is %d\n",add);
    return 0;
}
