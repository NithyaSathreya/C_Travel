// Create a data file containing customer records
#include<stdio.h>
#include<string.h>

#define TRUE 1
typedef struct
{
	int month ;
	int day ;
	int year ;
} date ;

typedef struct 
{
	char name [80] ;
	char street[80] ;
	char city[80] ;
	int acct_no ;
	char acct_type ;
	
	float oldbalance ;
	float newbalance ;
	float payment ;
	date lastpayment ;
} record ;

record readscreen (record customer);   // function prototype
void writefile(record customer);      // function prototype 

FILE *fpt;
void main ()
{
	int flag = TRUE ;    // variable declaration 
	record customer ;    // structure variable declaration 
	
	// Now , open a new data file for writing only
	fpt = fopen("C:\\Users\\nithy\\OneDrive\\Documents\\C_Course\\records.txt","w");
	
	// Now, enter the date and assign initial values 
	printf("CUSTOMER BILLING SYSTEM - INITIALIZATION\n\n");
	printf("Please enter todays\'s date (mm/dd/yyyy) : ") ;
	scanf("%d/%d/%d", &customer.lastpayment.month, 
	                  &customer.lastpayment.day,
					  &customer.lastpayment.year) ;
	customer.newbalance = 0 ;
	customer.payment = 0 ;
	customer.acct_type = 'C' ;
	
	// Main loop
	while ( flag)
	{
		// Have to enter customer's name and write to data file 
		printf("\nName (enter #'END' when finished): ") ;
		scanf("%[^\n]", customer.name) ;
		fprintf(fpt , "\n%s\n", customer.name) ;
		
		// Test for stopping condition 
		if (strcmp(customer.name , "END")== 0)
		break ; 
		
		customer = readscreen(customer) ; 
		writefile(customer) ;
			
	}
	fclose (fpt) ; 	
}

record readscreen (record customer)  // read remaining data 
{
        printf("Street: ") ;
        scanf("%[^\n]", customer.street) ;
        printf("City : ") ;
        scanf("%[^\n]" , customer.city) ;
        printf("Account Number ; ") ;
        scanf("%[^\n]" , customer.acct_no) ;
        printf("Current Balance : ") ; 
        scanf("%[^\n]" , customer.oldbalance) ; 
        
        return (customer) ; 
}

void writefile (record customer)  // For writing the remaining data into the data file
{
	fprintf (fpt , "%s\n " , customer.street) ; 
	fprintf (fpt , "%s\n " , customer.city) ; 
	fprintf (fpt , "%d\n " , customer.acct_no) ; 
	fprintf (fpt , "%c\n " , customer.acct_type) ;
	fprintf(fpt , "%2f\n" , customer.oldbalance) ;
	fprintf(fpt , "%2f\n" , customer.newbalance) ;
	fprintf(fpt , "%2f\n" , customer.payment) ;
	fprintf(fpt , "%d\%d\%d\n" , customer.lastpayment.month,
	                             customer.lastpayment.day,
								 customer.lastpayment.year);
}
	
	
        
        


