//Name:Bright Atsiaya Matasio
//Reg No:PA106/G/28751/25
//Discription: A programm to display a 2 D array room occupancy(one branch)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
 int occupancy[5][10];
  int occupied,vacant,floor;
  
  srand(time(0));
  printf("2D Array:Room occupancy (one branch)\n");

  for(int floor =0;floor<5;floor++){
    occupied=vacant=0;
  }  
    for(int room=0;room<10;room++){
        if(occupancy[floor][room]==1)
           occupied++;

           else vacant++;
    }    
           {
            printf("floor %d occupied:%d,vacant:%d\n",floor+ 1,occupied,vacant);
           }


    return 0;
}