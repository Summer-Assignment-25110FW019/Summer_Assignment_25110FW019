// WAP to find frequency of an element
#include <stdio.h>
int main() {
    int n,i,arr[50],item,count=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter element number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter element to find frequency: ");
    scanf("%d",&item);
    for(i=0;i<n;i++){
        if(item==arr[i]){
            count++;
        }
    }
    printf("Frequency of %d is: %d",item,count);
    return 0;
}
