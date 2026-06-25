// WAP to create number guessing game
#include <stdio.h>
int main(){
    int secret = 7;   // Secret number
    int guess;
    printf("Guess the number (1 to 10)\n");
    do{
        printf("Enter your guess: ");
        scanf("%d",&guess);
        if(guess>secret)
            printf("Too High!\n");
        else if(guess<secret)
            printf("Too Low!\n");
        else
            printf("Correct Guess!\n");
        
    } while(guess!=secret);

    return 0;
}
