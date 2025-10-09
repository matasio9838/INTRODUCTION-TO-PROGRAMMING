#include <stdio.h>
#include <string.h>
int main(){

char password [50] ;

do
{printf("enter  your password:");
    scanf("%s",password);
    /* code */
} while (strcmp(password,"1234")!=0);
printf("Access granted");


    return 0;
}