// Name:BRIGHT ATSIAYA MATASIO
//Reg No:PA106/G/28751/25
//Discription:My program work to  check if a student is eligible for exams

#include <stdio.h>
int main(){

float attendance;
float averageMarks;

printf("enter your attendance percentage:");
scanf("%f",&attendance);

printf("enter your averageMarks:");
scanf("%f",&averageMarks);

if(attendance>=75& averageMarks>=40)
{printf("student is legible for final exam.\n");
}
else
{printf("Not eligble.\n");
}
    return 0;
}
