#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    const int MIN = 1;
    const int MAX = 100;
    int guess, guesses, answer;

    //uses the current time as a seed
    srand(time(0));
    
    //generates a random number
    answer = (rand() % MAX) + MIN;

    do{
        printf("Enter a guess: ");
        scanf("%d", &guess);
        if(guess > answer){
            printf("Too High!!\n");
        }
        else if(guess < answer){
            printf("Too Low!!\n");
        }
        else{
            printf("Correctt!!!\n");
        }
        guesses++;

    }while(guess!= answer);

    printf("**********************\n");
    printf("answer: %d\n", answer);
    printf("guesses: %d\n", guesses);
    printf("**********************\n");

    return 0;
}