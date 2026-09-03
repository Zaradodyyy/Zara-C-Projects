#include <stdio.h>
#include <stdlib.h>



//Main system function
int main(){
    int userInput;
    int correctNumber;
    srand(2);

    printf("Guessing Game\n");
    printf("Guess until you get the number right\n");

    do {
        int correctNumber = (rand() % 17)+1;
        scanf("%d", &userInput);
        if(userInput != correctNumber){
            printf("Wrong Try again: %d\n", correctNumber);
        } else{
            printf("You've Won!\n%d", userInput);
            break;           
        }
    }
    while (userInput != correctNumber);
    return 0;
}