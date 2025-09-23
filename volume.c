/*
NAME:TREVEDIAN JUNIOR
REG:PA106/G/28831/25
DESCRIPTION:A PROGRAM TO FIND THE SURFACE AREA AND RADIUS OF A CYLINDER
*/

#include<stdio.h>
int main(){
	float radius, height, volume, surface_area;
	float pi=3.142;
	
	//prompting the user to enter the values of each variable
	printf("Enter the radius:");
	scanf("%f", &radius);
	
	printf("Enter the height:");
	scanf("%f", &height);
	
	//execution
	volume=pi*radius*radius*height;
	surface_area=2*pi*radius*radius*height+2*pi*radius*height;
	
	//display
	printf("\n volume is %.2f", volume);
	printf("\n surface_area is %.2f", surface_area);
	
	return 0;
}