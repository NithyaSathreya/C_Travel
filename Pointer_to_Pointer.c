#include <stdio.h>
void main (void)
{
	// for pointer to pointer declarat ion ** is place beside one another
	int *iptr ; // pointer to an integer 
	int **ptriptr; // pointer to int pointer
	int data ; // some integer location 
	iptr = &data ; // iptr now points to data 
	ptriptr = &iptr ; // ptriptr points to iptr 
	*iptr = 100 ;
	printf ("Variable 'data' contains : %i\n",data); // outputs 100
	**ptriptr = 200; // Same as data =200
	printf("Variable 'data' contains :%i\n", data);  // outputs 200 
	data = 300 ; 
	printf("ptriptr is pointing to :%i\n",**ptriptr); // outputs 300
	
}