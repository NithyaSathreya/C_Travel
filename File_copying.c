#include<stdio.h>
#include<stdlib.h>

int main (void)
{
	FILE *fp1 , *fp2; 
	int ch;
	char fname1[100] , fname2[100]; 
	printf("\nEnter File name to be copied\n");
    scanf("%s",fname1);
    fp1 = fopen(fname1,"r");
    
     if(fp1 == NULL)
    {
        printf("\nInput File %s doesn't exist\n", fname1);
        exit(0);
    }

    printf("\nEnter target File name\n");
    scanf("%s",fname2);

    fp2 = fopen(fname2,"w");
    while((ch=fgetc(fp1)) != EOF)
    {
        fputc(ch,fp2);
    }
    printf("\nFile %s successfully created\n",fname2);

    fclose(fp1);
    fclose(fp2);

    return 0;
    
}