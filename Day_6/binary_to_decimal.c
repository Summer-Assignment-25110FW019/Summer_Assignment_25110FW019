// WAP to convert binary to decimal
#include <stdio.h>
int main() {
    int i,binary,rem,decimal=0,base=1;
    printf("Enter a binary number: ");
    scanf("%d",&binary);
    while(binary>0){
        rem=binary%10;
        decimal=decimal+rem*base;
        base=base*2;
        binary=binary/10;
    }
    printf("Decimal Equivalent is %d " ,decimal);
    return 0;
}
