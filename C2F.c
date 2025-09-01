#include<stdio.h>

void main()
{
	float temp_c, temp_f;
	printf("Enter the temperature in Ceclius: \t");
	scanf("%f", &temp_c);
	
	temp_f = (18*temp_c)/10 + 32.0;
	
	printf("Temperature in Farrenheit: \t");
	printf("%f",temp_f);
	
}