//Leap year
#include<stdio.h>
int main()
{
	int y;
	while(!0)
	{
	
	printf("\t\t\tLeap year checking\n");
	printf("Enter year :");
	scanf("%d",&y);
	if(y%400==0)
	{
	
				printf("\n--------------------------\n");
			printf("%d is leapyear",y);
				printf("\n--------------------------\n");
		
	}
	else if(y%100==0)
	{
			printf("\n--------------------------\n");
		printf("%d is not a leap year",y);
			printf("\n--------------------------\n");
	}
	else if(y%4==0)
	{
			printf("\n--------------------------\n");
			printf("%d is leapyear",y);
				printf("\n--------------------------\n");
	}
	else
	{
			printf("\n--------------------------\n");
		printf("%d is not a leap year",y);
			printf("\n--------------------------\n");
	}
}
}
