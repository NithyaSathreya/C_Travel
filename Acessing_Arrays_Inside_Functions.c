#include <stdio.h>
#define MAX 5 
void Add10(int *Studentmarks)
{
	int id=0;
	for (id =0; id < MAX ; id ++)
	{
		//Studentmarks[id] = Studentmarks[id] + 10;
		*(Studentmarks++)  += 10;
 	}
		
	/*do
	{
		*Studentmarks++  += 10;
		id++;

	}while(id < MAX);	
	*/	
		
}

void junkfunction(int *val)
{
	//val[0] = val[0] + 10;
	*val += 10;
}

int junkfunction2(int val)
{
	val = val + 10;
	return val;
}

 void main ()
{
	int j ;
	int Marks[MAX] = {25,43,70,80,76};
	int iVal =10;
	
	Add10(Marks);
	junkfunction(&iVal);
	printf("Junk value after 1st increment: %d\n", iVal);
	iVal = junkfunction2(iVal);
	printf("Junk value after 2nd increment: %d\n", iVal);
	
	for (j= 0 ; j<MAX ; j++)
		printf ("Marks[%d]=%d\n", j, Marks[j]);
	
	
}