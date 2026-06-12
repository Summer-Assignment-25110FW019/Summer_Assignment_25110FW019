// WAP to count even and odd element
#include <stdio.h>
int main(){
    int array[100], n, i,even=0,odd=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++){
        if(array[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }    
    printf("Number of even elements is: %d\n", even);
    printf("Number of odd elements is: %d", odd);
    return 0;
}
