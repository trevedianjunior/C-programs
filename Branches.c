/*
Name : Trevedian Junior
Reg No : PA106/G/28831/25
Description : A program to display Multiple Branches
*/

#include <stdio.h>
#include<stdlib.h>
#include <time.h>

int main(){
int chain[3][5][10]	;
int totalOccupied=0;
int branch,floor,room;

srand(time(0));
printf("Multiple Branches\n");

for(branch=0; branch<3;branch++){
	int branchOccupied=0;
	
	for(floor=0;floor<5;floor++){
		for(room=0;room<10;room++){
			chain[branch][floor][room] =rand()%2;
			
			if(chain[branch][floor][room]==1)
				branchOccupied++;
		}
	}
	printf("Branch%d occupied rooms:%d\n",branch+ 1,branchOccupied);
	totalOccupied+=branchOccupied;
}	
printf("\nTotal occupied rooms across all branches =%d\n",totalOccupied);	
		
	return 0;
}