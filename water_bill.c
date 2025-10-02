/*
Name: Trevedian Junior
Reg No: PA106/G/28831/25
Date: 1st October 2026
Description: Water bill calculator
0-30 units = 20 KES per unit
31-60 units = 25 KES per unit
above 60 units = 30 KES per unit
*/
#include<stdio.h>  //header file

int main () {

int water_units; 
float total_bill;

printf("Enter number of water_units:");
scanf("%d", &water_units);

if(water_units < 30) {
   total_bill = water_units*20;	
}
else if(water_units >= 30 && water_units <= 60) {
   total_bill = water_units*25;	
}
else if(water_units > 60) {
   total_bill = water_units*30;
}
printf("Your total_bill is KES% .2f", total_bill);

return 0;	
}
