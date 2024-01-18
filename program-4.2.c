
	// Write C Program to find gross salary by adding % of HRA, DA, and TA of user choice.
#include<stdio.h>

main()
{
	int salary,hra,da,ta,Rs;
	
	printf("Enter your salary :- ");
	scanf("%d",&salary);
	
	printf("Enter your value of HRA :- ");
	scanf("%d",&hra);
	
	printf("Enter your value of DA :- ");
	scanf("%d",&da);
	
	printf("Enter your value of TA :- ");
	scanf("%d",&ta);
	
	Rs = salary + (salary * hra /100) + (salary * da /100) + (salary * ta /100);
	
	printf("The salary is a Rs. %d",Rs);
	
}
