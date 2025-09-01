#include <stdio.h>
void main (void)
{
	int number = 75 ;
	int mark ;
	printf("Yor examination marks \n");
	printf("Enter your score \n");
	scanf("%d",&mark);
	if (mark >= number)
	{
		printf("Incredible , you have passed with a merit \n");
		
	}
	else 
	{
		printf("You have failed ,unlucky \n");
	}
}