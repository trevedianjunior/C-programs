/*
Name: Trevedian Junior
Reg no: PA106/G/28831/25
Description: Calculate Electricbills
*/

#include<stdio.h>

//function prototype
float calculateElectricBill(int units);

void main (){
	
	int units;
	float totalbills;
	
	printf("\nEnter the number of units: ");
	scanf("%d",&units);
	
	//call the function
	totalbills=calculateElectricBill(units);
	
    printf("Total bills : ksh%.2f \n",totalbills);
    
    return 0;

}
//function declaration
float calculateElectricBill(int units){
    float Electricbill;
    
    //units less than or equal to 100
    if(units<=100){
		Electricbill=units*10;
	}
	
	//units equal to 100 and less than or equal to 200
	else if(units==100&& units <=200){
		Electricbill=(100*10)+(units-100)*15;
	}
    
    //units greater than 200
    else if (units>200){
		Electricbill=(100*10)+(100*15)+(units-200)*20;
	}
	return Electricbill;
}