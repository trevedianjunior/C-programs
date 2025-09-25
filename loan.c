/*
Name: Trevedian Junior
Reg No: PA106/G/28831/25
Description:A program to determine if a banker qualifies for a loan 
*/

#include<stdio.h>
int main () {
 float annual_income;
 int age;

 //prompt the user to enter the details
 printf("enter age:\n");
 scanf("%d", &age);

 printf("enter the annual_income:\n");
 scanf("%f", &annual_income);

 //check if the customer qualifies for a loan
 if(age >=21 && annual_income >=21000) {
 printf("congratulations you qualify for a loan\n");
 }else {
 printf("unfortunately we are unable to offer you a loan at this time\n") ;
 }
 return 0;   		
}	
	

