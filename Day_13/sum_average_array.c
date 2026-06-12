// WAP to find sum and average of array
#include <stdio.h>
int main() {
    int n,array[100],i,sum=0;
    float average;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
        sum=sum+array[i];
    }
    average=(float)sum/n;
    printf("The sum of array elements is: %d\n",sum);
    printf("The average of array elements is: %.2f\n",average);
    return 0;
}
