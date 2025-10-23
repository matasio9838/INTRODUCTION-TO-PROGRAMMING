//Name:Bright Atsiaya Matasio
//Reg No:PA106/G/28751/25
//Discription:My programm to convert fahrenhheit to celcius

#include <stdio.h>
 float convertToCelsius(float fahrenheit){
    return(fahrenheit-32)*5.0/9.0;
 }

  int main(){
    float f,c;
    printf("Enter your temperature  in fahrenheit:");
    scanf("%f",&f);

      c=convertToCelsius(f);
      printf("Temperature in Celcius:%.2fC\n",c);
       
        return 0;
  }