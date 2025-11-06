/*
Name: Trevedian Junior
Reg no: PA106/G/28831/25
Description: A program that enables the librarian enter book titles and stores
each title in a textfile
*/
#include<stdio.h>

int main(){ 
	char book_title[100];
	FILE *fptr;
	
	fptr=fopen("C:\\borrowed_books.txt","a");
	
	if (fptr==NULL){
		printf ("There was an error opening the file\n");
		return 1;
	}
	printf("Enter book title:");
	fgets(book_title,100,stdin);
	
	fprintf(fptr,"%s",book_title);
	fclose(fptr);
	
	printf("Book title updated successfully");
	

	return 0;
}