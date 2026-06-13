// WAP to second largest element
#include <stdio.h>
int main() {
    int n,i,arr[50],item,largest,secondlargest;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter element number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    largest=secondlargest=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>largest){
            secondlargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>secondlargest&&arr[i]!=0){
            secondlargest=arr[i];
        }
    }
    printf("Second largest element is: %d",secondlargest);
    return 0;
}
