#include <stdio.h>

int main()
{
    int choice;
    char temp;

    char answers[4] = {'B', 'C', 'D', 'B'};
    int points[4] = {0};
    int total_points = 0;

    printf("====================\n");
    printf("Welcome to Quiz App\n");
    printf("====================\n");
    printf("Press 1 to start game\n");
    printf("Press 0 to quit game\n");

    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("\nQ1. Which planet is known as the Red Planet?\n");
        printf("A) Venus\nB) Mars\nC) Jupiter\nD) Saturn\n");
        printf("Choose the answer: ");
        scanf(" %c", &temp);   // space before %c
        points[0] = (temp == answers[0]) ? 5 : 0;
        if(points[0] == 5){
             printf("Correct answer youn awarded with %d points",points[0]);
        }else{
            printf("sorry wrong answer.");
        }


        printf("\nQ2. What is the capital of Japan?\n");
        printf("A) Beijing\nB) Seoul\nC) Tokyo\nD) Bangkok\n");
        printf("Choose the answer: ");
        scanf(" %c", &temp);
        points[1] = (temp == answers[1]) ? 5 : 0;
         if(points[0] == 5){
             printf("Correct answer youn awarded with %d points\n",points[0]);
        }else{
            printf("sorry wrong answer.");
        }


        printf("\nQ3. Which ocean is the largest in the world?\n");
        printf("A) Atlantic Ocean\nB) Indian Ocean\nC) Arctic Ocean\nD) Pacific Ocean\n");
        printf("Choose the answer: ");
        scanf(" %c", &temp);
        points[2] = (temp == answers[2]) ? 5 : 0;
         if(points[0] == 5){
             printf("Correct answer youn awarded with %d points\n",points[0]);
        }else{
            printf("sorry wrong answer.");
        }

        printf("\nQ4. Who wrote the play 'Romeo and Juliet'?\n");
        printf("A) Charles Dickens\nB) William Shakespeare\nC) Mark Twain\nD) Jane Austen\n");
        printf("Choose the answer: ");
        scanf(" %c", &temp);
        points[3] = (temp == answers[3]) ? 5 : 0;
         if(points[0] == 5){
             printf("Correct answer youn awarded with %d points\n",points[0]);
        }else{
            printf("sorry wrong answer.");
        }

        for (int i = 0; i < 4; i++)
        {
            total_points += points[i];
        }

        printf("\nTotal Score: %d\n", total_points);
    }
    else
    {
        printf("You quit the game.\n");
    }

    return 0;
}
