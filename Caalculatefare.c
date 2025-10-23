/*
Name : Trevedian Junior
Reg No : PA106/G/28831/25
Description : A program  that takes the distance traveled as input and returns the total fare
*/

#include<stdio.h>
//function prototype
float calculateFare(float distance);

int main(){
	float distance ;
	float total_fare;
	
	printf("/nEnter the total distance covered :");
	scanf("%f",&distance);
	
	//function call
	total_fare= calculateFare(distance);
	
	//display the total fare
	printf("The Total fare is : %.2f km \n",total_fare);
	
	
	
return 0;	
}

//function declaration
float calculateFare(float distance){
      float fare;
      fare=distance*50;
      
      return fare;
      
}

