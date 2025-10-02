/*
Name:Trevedian Junior
Reg No:PA106/G/28831/25
Date:1st October 2025
Description:Program to check exam Eligibility for students
*/

#include<stdio.h>

int main () {
int attendance, average_marks;

//prompt the user to enter variables
printf("Enter your attendance: ");
scanf("%d", &attendance);

printf("Enter your average_marks: ");
scanf("%d", &average_marks);

if(attendance >= 75 &&average_marks >= 40) {
printf("you are eligible for exams");
}
else{
printf("you are not eligible for exams");	
}
return  0;   //execution successful
}
