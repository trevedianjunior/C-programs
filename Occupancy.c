/*
Name : Trevedian Junior 
Reg No : PA106/G/28831/25
Description : A program to display room occupancy for vacancies 

*/
#include <stdio.h>
#include<stdlib.h>
#include <time.h>


int main()
{
int occupancy[5][10];	
int occupied,vacant;	
int floor,room;
srand(time(0));	
	printf("Room Occupancy\n");
	
for(floor=0;floor<5;floor++){
	occupied=vacant=0;
for(room=0;room<10;room++){
	occupancy[floor][room]=rand()%2;
if(occupancy[floor][room]==1)
	occupied++;
else vacant++;	
}	
printf("Floor %d  Occupied: %d| Vacant:%d\n",floor +1,occupied,vacant);
}	
	
	return 0;
}