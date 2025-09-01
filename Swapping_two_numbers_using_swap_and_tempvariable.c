# include <stdio.h>

 void swap (float *d1 , float *d2)   /* function to swap two numbers */
 {
 	float temp ; 
 	temp=*d1 ;
 	*d1= *d2 ; 
 	*d2= temp ;
 }
 
 
void main ()
{
	float data1 , data2 ;
	printf("Enter 2 real numbers :\n");
	scanf("%f %f",&data1,&data2);
	printf("Data1 contains : %f\n",data1);
	printf("Data2 contains :%f\n",data2);
	/*pass address of the variables whose values are to be swapped.*/
	swap(&data1,&data2);   
	printf("After swapping .........\n");
	printf("Data1 contains:%f\n",data1);
	printf("Data2 contains :%f\n",data2);
	
}

    
 