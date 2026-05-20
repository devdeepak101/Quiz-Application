#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    char ans1, ans2, ans3, ans4, ans5;
    char ans6, ans7, ans8, ans9, ans10;

    int point01, point02, point03, point04, point05;
    int point06, point07, point08, point09, point10;

    int totalScore;

    printf("=====================================\n");
    printf("        WELCOME TO GK QUIZ GAME      \n");
    printf("=====================================\n\n");

    printf("> Press 7 to Start the Game\n");
    printf("> Press 0 to Quit the Game\n\n");

    printf("Enter your choice: ");
    scanf("%d", &i);

    if(i == 7){

        printf("\nGame Started...\n\n");

        
        printf("1) Which planet is known as the Red Planet?\n\n");
        printf("a) Venus\n");
        printf("b) Mars\n");
        printf("c) Jupiter\n");
        printf("d) Saturn\n");

        printf("Enter your Answer: ");
        scanf(" %c", &ans1);

        if(ans1 == 'b'){
            printf("Correct Answer\n");
            point01 = 5;
        } else {
            printf("Wrong Answer\n");
            point01 = 0;
        }

        printf("You scored %d points\n\n", point01);


       
        printf("2) What is the capital of Australia?\n\n");
        printf("a) Sydney\n");
        printf("b) Melbourne\n");
        printf("c) Canberra\n");
        printf("d) Perth\n");

        printf("Enter your Answer: ");
        scanf(" %c", &ans2);

        if(ans2 == 'c'){
            printf("Correct Answer\n");
            point02 = 5;
        } else {
            printf("Wrong Answer\n");
            point02 = 0;
        }

        printf("You scored %d points\n\n", point02);


        
        printf("3) Who wrote Harry Potter and the Philosopher's Stone?\n\n");
        printf("a) J.R.R. Tolkien\n");
        printf("b) J.K. Rowling\n");
        printf("c) George Orwell\n");
        printf("d) Agatha Christie\n");

        printf("Enter your Answer: ");
        scanf(" %c", &ans3);

        if(ans3 == 'b'){
            printf("Correct Answer\n");
            point03 = 5;
        } else {
            printf("Wrong Answer\n");
            point03 = 0;
        }

        printf("You scored %d points\n\n", point03);


        printf("4) Which is the largest ocean on Earth?\n\n");
        printf("a) Atlantic Ocean\n");
        printf("b) Indian Ocean\n");
        printf("c) Arctic Ocean\n");
        printf("d) Pacific Ocean\n");

        printf("Enter your Answer: ");
        scanf(" %c", &ans4);

        if(ans4 == 'd'){
            printf("Correct Answer\n");
            point04 = 5;
        } else {
            printf("Wrong Answer\n");
            point04 = 0;
        }

        printf("You scored %d points\n\n", point04);


        
        printf("5) What is the chemical symbol for gold?\n\n");
        printf("a) Ag\n");
        printf("b) Gd\n");
        printf("c) Au\n");
        printf("d) Go\n");

        printf("Enter your Answer: ");
        scanf(" %c", &ans5);

        if(ans5 == 'c'){
            printf("Correct Answer\n");
            point05 = 5;
        } else {
            printf("Wrong Answer\n");
            point05 = 0;
        }

        printf("You scored %d points\n\n", point05);


        
        printf("6) Which country gifted the Statue of Liberty to the United States?\n\n");
        printf("a) Germany\n");
        printf("b) Canada\n");
        printf("c) France\n");
        printf("d) Italy\n");

        printf("Enter your Answer: ");
        scanf(" %c", &ans6);

        if(ans6 == 'c'){
            printf("Correct Answer\n");
            point06 = 5;
        } else {
            printf("Wrong Answer\n");
            point06 = 0;
        }

        printf("You scored %d points\n\n", point06);


        
        printf("7) How many continents are there in the world?\n\n");
        printf("a) 5\n");
        printf("b) 6\n");
        printf("c) 7\n");
        printf("d) 8\n");

        printf("Enter your Answer: ");
        scanf(" %c", &ans7);

        if(ans7 == 'c'){
            printf("Correct Answer\n");
            point07 = 5;
        } else {
            printf("Wrong Answer\n");
            point07 = 0;
        }

        printf("You scored %d points\n\n", point07);


       
        printf("8) Which gas do plants absorb from the atmosphere?\n\n");
        printf("a) Oxygen\n");
        printf("b) Nitrogen\n");
        printf("c) Carbon Dioxide\n");
        printf("d) Hydrogen\n");

        printf("Enter your Answer: ");
        scanf(" %c", &ans8);

        if(ans8 == 'c'){
            printf("Correct Answer\n");
            point08 = 5;
        } else {
            printf("Wrong Answer\n");
            point08 = 0;
        }

        printf("You scored %d points\n\n", point08);


        
        printf("9) Who was the first man to walk on the Moon?\n\n");
        printf("a) Yuri Gagarin\n");
        printf("b) Neil Armstrong\n");
        printf("c) Buzz Aldrin\n");
        printf("d) Michael Collins\n");

        printf("Enter your Answer: ");
        scanf(" %c", &ans9);

        if(ans9 == 'b'){
            printf("Correct Answer\n");
            point09 = 5;
        } else {
            printf("Wrong Answer\n");
            point09 = 0;
        }

        printf("You scored %d points\n\n", point09);


        
        printf("10) Which is the longest river in the world?\n\n");
        printf("a) Amazon River\n");
        printf("b) Yangtze River\n");
        printf("c) Nile River\n");
        printf("d) Mississippi River\n");

        printf("Enter your Answer: ");
        scanf(" %c", &ans10);

        if(ans10 == 'c'){
            printf("Correct Answer\n");
            point10 = 5;
        } else {
            printf("Wrong Answer\n");
            point10 = 0;
        }

        printf("You scored %d points\n\n", point10);


        totalScore = point01 + point02 + point03 + point04 + point05 +
                     point06 + point07 + point08 + point09 + point10;

        printf("=====================================\n");
        printf("          QUIZ COMPLETED             \n");
        printf("=====================================\n\n");

        printf("Your Total Score = %d / 50\n", totalScore);

    }
    else if(i == 0){

        printf("\nGame Ended\n");

    }
    else {

        printf("\nInvalid Input\n");

    }

    return 0;
}
