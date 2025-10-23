#include <stdio.h>
float calculateAmount( float distance){
  float rate=50.0;
  return distance*rate;

   return 0; 
}



int main(){

float distance;

printf("Enter the total distance coverd:");
scanf("%f",&distance);


printf("The total fare= Ksh%.2f\n",calculateAmount(distance));




}
