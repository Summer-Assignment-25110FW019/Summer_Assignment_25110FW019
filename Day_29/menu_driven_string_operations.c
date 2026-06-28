//WAP to create menu driven string operating system
#include <stdio.h>
#include <string.h>
int main(){
    char str[100], temp[100];
    int choice, i, len, flag;

    printf("Enter a string: ");
    scanf("%s", str);

    do{
        printf("\n===== STRING OPERATIONS =====\n");
        printf("1. Find Length\n");
        printf("2. Reverse String\n");
        printf("3. Convert to Uppercase\n");
        printf("4. Check Palindrome\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("Length = %d\n", strlen(str));
                break;

            case 2:
                strcpy(temp, str);
                strrev(temp);
                printf("Reversed String = %s\n", temp);
                break;

            case 3:
                strcpy(temp, str);
                for(i = 0; temp[i] != '\0'; i++){
                    if(temp[i] >= 'a' && temp[i] <= 'z')
                        temp[i] = temp[i] - 32;
                }
                printf("Uppercase String = %s\n", temp);
                break;

            case 4:
                len = strlen(str);
                flag = 1;

                for(i = 0; i < len / 2; i++){
                    if(str[i] != str[len - 1 - i]){
                        flag = 0;
                        break;
                    }
                }

                if(flag == 1)
                    printf("Palindrome String\n");
                else
                    printf("Not a Palindrome String\n");

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
