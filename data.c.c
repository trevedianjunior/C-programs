/*
Name: Trevedian Junior
Reg No: PA106/G/28831/25
Date: 1st October 2026
Description: Mobile Data Bundle Purchase
Options   Bundle    Cost(KES)
   1         100MB      50
   2         500MB      200
   3         1GB        350
   4         2GB        6OO

*/

#include<stdio.h>

int main() {
int choice;

printf("Select data_bundles \n"); 
printf("1. 100MB @ 50 KES  \n");
printf("2. 500MB @ 200 KES  \n");
printf("3. 1GB   @ 350 KES  \n");
printf("4. 2GB   @ 600 KES  \n");

printf("Enter your choice(1-4):");
scanf("%d",&choice);

//use of switch statement
switch(choice) {
case 1:
   printf("You have chosen 100MB- KES50");
break;
case 2:
   printf("You have chosen 500MB- KES200");
   break;
case 3:
   printf("You have chosen 1GB- KES350");
   break;
case 4:
   printf("You have chosen 2GB- KES600");
   break;
default:
	printf("invalid choice");
}
return 0;		
}

