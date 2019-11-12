#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

typedef struct studentStatus {
	
	char firstName[30];
	char lastName[30];
	char Major[20];
	char Email[50]; 
	int ID;
	int Age;
	
} studentStatus;

typedef struct studentPayment {
	
	char ActivePaymentDetail[50];
	double ActivePaymentAmount;
	char ActiveHoldDetail[50];
	double ActiveHoldAmount; 
	
} studentPayment;

typedef struct studentRecords {
	
	char activeSemester[10];
	int activeYear;
	
	
} studentRecords;

int main ()
{
	studentStatus *student;
	
	int i, n;
	
	printf("Enter the number of persons: ");
   scanf("%d", &n);
	
	student = (struct studentStatus*) malloc(n * sizeof(struct studentStatus));
   for(i = 0; i < n; ++i)
   {
       printf("Enter first name, last name, Major, Email, ID, and age respectively: ");
       
       scanf("%s %s  %s %s %d %d", (student+i)->firstName, (student+i)->lastName, (student+i)->Major, (student+i)->Email, &(student+i)->ID, &(student+i)->Age);
	   
	   printf("");
   }
   printf("Displaying Information:\n");
   for(i = 0; i < n; ++i)
   {
       printf("First Name: %s\tLast Name: %s\tMajor: %s\tEmail: %s\tID: %d\tAge: %d\n", (student+i)->firstName, (student+i)->lastName, (student+i)->Major, (student+i)->Email, (student+i)->ID, (student+i)->Age);
	   
	   printf("");
   }
   return 0;
}