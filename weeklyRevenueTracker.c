#include <stdio.h>
int main(){

double revenue[7];
double totalRevenue=0, averageRevenue=0;

printf("1 D Array:Weekly Revenue Tracker\n");

for(int i=0; i<7; i++){
    printf("Enter revenue for day %d:",i+1);
    scanf("%lf",&revenue);
    totalRevenue += revenue[i];;
} 
     averageRevenue = totalRevenue /7.0;
       
       printf("Total weekly revenue:%2f\n",totalRevenue);
       printf("Average daily revenue:%2f\n",averageRevenue);

    return 0;
}