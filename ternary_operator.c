#include<stdio.h>
int main()
{
	int age =15 ;
	char operator ='+' ;
	(age>=18)? printf("You can vote\n"):printf("You cannot vote\n");
	int num1 = 8 ;
	int num2 = 7;
	int result = (operator =='+')? (num1+num2):(num1-num2);
	printf("%d\n", result);
	
	return 0;
}

