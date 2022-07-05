//Positive or Negative number
#include<Stdio.h>
int main()
{
	int n;
	while(1)
	{
	
	printf("\nEnter a number to check +ve or -ve:");
	scanf("%d",&n);
	if(n>0)
	{
		printf("\n--------------------------\n");
		printf("%d is positive ",n);
		printf("\n--------------------------\n");
	}
	else if(n<0)
	{
		printf("\n--------------------------\n");
		printf("%d is negative ",n);
		printf("\n--------------------------\n");
		
	}
	else
	{
		printf("\n--------------------------\n");
		printf("%d is zero",n);
		printf("\n--------------------------\n");
	}
}
}
