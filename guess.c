#include <stdio.h>

#include <stdlib.h>
#include <time.h>
int main() {

    int guess=-1, secret_number, attempts=0;
    srand(time(0));
    secret_number =(rand()%20)+1;

    while (guess !=secret_number){
        printf("enter your guessing number:");
        scanf("%d", guess);
        attempts++ ;
    
        if (guess>secret_number){
            printf("too high\n");
        }else if (guess<secret_number){
            printf("too low \n");
        }else{
            printf("congratulattionns!");
        } printf("you have %d attempts \n",attempts);
        {
            /* code */
        }
        
        {
            /* code */
        }
        
    }
    {
        /* code */
    }
    
return 0;
} 
    
