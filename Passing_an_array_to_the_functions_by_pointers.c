#include<stdio.h>
void exchange (int*x, int *y)
{
	int temp ;
	temp =*x;
	*x= *y ;
	*y= temp ;
}
void main ()
{
	int a,b ;
	printf("Program swaps values of the variables 'a'and 'b' \n");
	printf("\nValues of a and b :");
	scanf("%d  %d ", &a ,&b);
	printf("a = %5d    b =%5d\n",a,b);
	exchange (&a,&b); // Adresses are passed as arguments 
	printf("\n After swapping :\n");
	printf("a= =%5d b=%5d\n",a,b);
}