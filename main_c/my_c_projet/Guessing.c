# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main (){
srand(time(NULL));
int guess = 0;
int tries = 0;
int min = 1;
int max = 100;
int answer = (rand() % max - min +1) + min;
printf("Number guessing game");
do{
    printf("Guess a number between %d - %d : \n", min , max);
    scanf("%d" , &guess);
    tries ++;

    if (guess > answer){
      printf("TOO HIGH!\n");
}
    else if (guess < answer){
            printf("TOO LOW!\n");
}
    else{
       printf("CORRECT!");
}
}while(guess != answer);
printf("The answer is %d\n" ,answer);
printf("It took you %d  ")
return 0;
}
