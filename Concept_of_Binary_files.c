//Concept of Binary Files
// Store 100 lines in a text file
#include<stdio.h>
#include<conio.h>

void main ()
{

FILE *fp;
int i ;
if((fp=fopen("C:\\Users\\nithy\\OneDrive\\Documents\\C_Course\\Lines.txt","wt"))== NULL)
printf("\nERROR - Cannot create the designated file \n");

else
{
	for (i=1 ; i<=100 ; i++ )
	fprintf(fp ,"\n");	
}
  fclose (fp);
  getch();

}