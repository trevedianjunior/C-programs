/*
Name: Trevedian Junior
Reg NO: PA106/G/28831/25
Date: 6th October 2025
Description: A program of a bank ATM to allow withdrawls for the use until the 
becomes zero or negative
*/

#include <stdio.h>

int main () {
	
   int amount;
   int balance = 60000 ; //start
   printf(" Your current balance is %d \n",balance);
   
   while(balance>0)
   {	   
	 printf("Enter the amount to withdraw \n");
	 scanf("%d", &amount);
	 balance -= amount;
	 printf("New balance: = %d \n", balance);
	     
   }
   printf("Insufficient balance");
   	
   return 0;		
}
