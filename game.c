#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int num, guess_num, count=1;
    srand(time(0));
    num = rand()%100 + 1;    // Generates a random num between 1 and 100
   
    printf("\t\t============== GUESS THE NUMBER GAME ==============");

    do{
        printf("\nGuess the number between 1 to 100 => ");
        scanf("%d", &guess_num);
        
        if(guess_num>num){
            printf("\n***** Wrong Guess *****\n");
            printf("Guess a LOWER number please!");
        }

        else if(guess_num<num){
            printf("\n***** Wrong Guess *****\n");
            printf("Guess a HIGHER number please!");
        }

        else{
            printf("\n\nHurrrrraaaaaaayyyyyyyyy!! YOU WIN!!\nYou guessed it right in %d attempts!\n", count);
        }
        count++;
    }while(guess_num!=num);
    
    return 0;
}