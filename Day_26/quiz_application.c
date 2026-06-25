 //Quiz application program
 #include <stdio.h>
int main(){
    int score=0,ans;
    printf("===== QUIZ APPLICATION =====\n");
    printf("\nQ1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    scanf("%d", &ans);
    if(ans == 2)
        score++;
    printf("\nQ2. How many days are there in a week?\n");
    printf("1. 5\n2. 6\n3. 7\n4. 8\n");
    scanf("%d", &ans);
    if(ans == 3)
        score++;
    printf("\nQ3. Which language is used for system programming?\n");
    printf("1. C\n2. HTML\n3. CSS\n4. SQL\n");
    scanf("%d", &ans);
    if(ans == 1)
        score++;
    printf("\nYour Score = %d/3\n", score);
    if(score==3)
        printf("Excellent!\n");
    else if(score==2)
        printf("Good Job!\n");
    else
        printf("Keep Practicing!\n");

    return 0;
}
