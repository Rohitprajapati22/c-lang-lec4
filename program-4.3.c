
	// Write C Program to find the third angle of a right triangle if two other angles are given.

#include<stdio.h>

main()
{
	
	int a,b,ans;
	
	printf("Enter the First angle a :-");
	scanf("%d",&a);
	
	printf("Enter the Second angle b :-");
	scanf("%d",&b);
	
	ans = 180 -(a + b);
	printf("Third angle is a :- %d",ans);
}
