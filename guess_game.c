/*
Name: Trevedian Junior
Reg No: PA106/G/28831/25
Date: 6th October 2025
Description: A program to implement a number guessing game
*/

#include <stdio.h>

int main  () {
   int secret, guess, attempts=0;
   rand(time(0));
   secret =rand()	%20+1;
   
printf("Welcome to Guessing game!!\n");

while(1) {
	printf("Enter your guess (1-20) :");
	scanf("%d",&guess);
	attempts++;
	
if(guess>secret)
	printf("Too high!\n");
else if(guess<secret)
	printf("Too low!\n");
else{
	printf("Congratulations! You guessed it in %d attempts. \n",attempts);
	break;
}
}	
	
	return 0;
}