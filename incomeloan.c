
#include <stdio.h>
int main(){
float income;
int age;
printf("enter your age:");
scanf("%d",&age);
printf("enter your annual income");
scanf("%f",&income);;

if(age>=21& income>=21000)
{printf("congratulations,you qualify for a loan.\n");
}
else
{
printf("Unfortunatel we are unable to offer a loan at this time.\n");
}

    return 0;


}