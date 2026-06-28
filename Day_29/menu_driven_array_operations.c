//WAP to create menu driven array operating system
#include <stdio.h>
int main(){
    int a[100], n, i, choice, sum = 0, largest, key;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    do{
        printf("\n===== ARRAY OPERATIONS =====\n");
        printf("1. Display Array\n");
        printf("2. Find Sum\n");
        printf("3. Find Largest Element\n");
        printf("4. Search Element\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("Array Elements: ");
                for(i = 0; i < n; i++)
                {
                    printf("%d ", a[i]);
                }
                printf("\n");
                break;

            case 2:
                sum = 0;
                for(i = 0; i < n; i++)
                {
                    sum = sum + a[i];
                }
                printf("Sum = %d\n", sum);
                break;

            case 3:
                largest = a[0];
                for(i = 1; i < n; i++)
                {
                    if(a[i] > largest)
                    {
                        largest = a[i];
                    }
                }
                printf("Largest Element = %d\n", largest);
                break;

            case 4:
                printf("Enter element to search: ");
                scanf("%d", &key);

                for(i = 0; i < n; i++){
                    if(a[i] == key){
                        printf("Element Found at Position %d\n", i + 1);
                        break;
                    }
                }

                if(i == n){
                    printf("Element Not Found\n");
                }
                break;

            case 5:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);
    return 0;
}
