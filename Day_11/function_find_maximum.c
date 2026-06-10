// WAP to write function to find maximum
#include <stdio.h>
int max(int x, int y){
    if(x>y){
        return x;
    }
    else 
    return y;
}
int main() {
    int a,b;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    int maximum=max(a, b);
    printf("maximum is %d ",maximum);

    return 0;
}
