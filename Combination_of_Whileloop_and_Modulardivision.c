//Program to find whther the given nymber digts sum is greater than or less than 0
#include<stdio.h>
#include<math.h>
int main ()
{
	int Number, originalNumber,SUM=0 ;
	
  	// First give the input
  	printf("Enter a number :\n");
  	scanf("%d",&Number);
  	
  	// For displaying purpose store the original number
  	originalNumber = Number ;
  	
  	// Now , calculate the sum of digits using the Modular division and loop 
  	while(Number>0)
  	{
  		SUM += Number % 10;  // For getting the last digit and add to sum
  		Number /= 10;      // For removing the last digit 
	}
	
	// Now for checking the sum is greater or less than 0 and print the value 
	if (SUM>0)
	{
		printf("Sum of digits of %d is %d and it is grater than 0. \n",originalNumber,SUM);
	}
	else
	{
		printf("Sum of digits %d is %d and it is less than 0.\n",originalNumber,SUM);
	}
  		
}