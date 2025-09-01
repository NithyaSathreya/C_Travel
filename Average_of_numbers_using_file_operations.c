// Average of Numbers stored in a Data file
#include <stdio.h>
#include<conio.h>

void main ()
{
	FILE *fpin , *fpout ;
	float val , avg , sum =0 ;
	int count=0 ; 
	if ((fpin = fopen("C:\\Users\\nithy\\OneDrive\\Documents\\C_Course\\Values.txt","r+"))==NULL)
	// Open the data file for reading purpose 
	printf("\nERROR-Cannot open the designated file\n");
	else { // Read  and display each character from the file 
	while (!feof(fpin)){
		fscanf(fpin , "%f",&val);
		sum += val ;
		count++ ;
		
	}
	}
   avg =sum/count ;
    	if ((fpout = fopen("C:\\Users\\nithy\\OneDrive\\Documents\\C_Course\\Average.txt","w"))==NULL)
	// Open the data file for writing purpose 
	printf("\nERROR-Cannot open the designated file\n");
	else  // Write   and display each character from the file 
	fprintf (fpout ,"The average of numbers of file file Values.txt is %.2f\n",avg);
	fclose (fpin);
	fclose(fpout);
	getch ();
	
	/* RESULT:  ERROR- Cannot open the designated file as there is no file with those names in the destination given from 
	your side */s
	
}