/*
Name: Trevedian Junior
Reg no: PA106/G/25
Description: A c program that reads, calculates and ensures that the file is
properly closed after reading
*/
#include <stdio.h>

int main(){
	
	FILE *fptr;
	
double total_transaction;
double total_sales=0.0;

fptr=fopen("C:\\sales.txt","r");

if (fptr==NULL){
		printf ("There was an error opening the file\n");
		return 1;
	}
	while (fscanf(fptr,"%lf",&total_transaction)!=EOF){
		total_sales += total_transaction;
	}
	fclose(fptr);
	
	printf("Total amount of sales for today: ksh%.2lf\n",total_sales);
	
	return 0;
}
 