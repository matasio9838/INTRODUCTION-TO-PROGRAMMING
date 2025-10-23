//Name:Bright Atsiaya Matasio
//Reg No:PA106/G/28751/25
//Discription:My programm to calculate electrical bill


#include <stdio.h>
float amount;
float calculateBill(int units){
  
if(units<=100){

        amount=units*10;
    }   
      else if(units<=200){

        amount=(100*10)+(units-100)*15;
      }
      else{
         amount=(100*10)+(100*15)+(units-200)*20;
      }
        return amount;
}


    



int main(){
    int units;
    float bill;
    

    printf("Enter amount of units used:");
    scanf("%d",&units);
    
    bill=calculateBill(units);
    printf("Total bill=Ksh %.2f\n",bill);

    
    return 0;

}