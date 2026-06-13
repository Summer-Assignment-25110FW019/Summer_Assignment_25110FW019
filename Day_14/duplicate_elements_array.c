// WAP to find duplicates in array
#include <stdio.h>
int main() {
    int n,i,arr[50],j;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter element number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Duplicate elements are: ");
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                printf("%d ",arr[i]);
                break;
            }
        }
    }
    return 0;
}
