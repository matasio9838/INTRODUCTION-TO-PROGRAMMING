//Name:BRIGHT ATSIAYA MATASIO
//Reg No:PA106/G/28751/25
//Discription:My programming work to to prompt  the user to enter diffrent internet data bundles

#include <stdio.h>
int main(){

int choice;

printf("mobile data bundles:\n");
printf("1. 100mb-50KES\n");
printf("2. 500mb-200KES\n");
printf("3. 1GB-350KES\n");
printf("4. 2GB-600KES\n");

printf("enter your choice:");
scanf("%d",&choice);

switch(choice){
case 1:printf("you selected 100mb for 50KES\n");
break;

case 2:printf("you selected 500mb for 200KES\n");
break;

case 3:printf("you selected 1GB for 350KES\n");
break;

case 4:printf("you  selected 2GB for 600KES\n");
break;

default:
printf("invalid choice\n");
}
    return 0; 
}
