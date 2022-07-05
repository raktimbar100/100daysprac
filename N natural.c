//Sum of N natural numbers
#include<stdio.h>
int main()
{
	int sum=0,n,i;
	printf("Enter the value to get the summation :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	printf("\nSummation of first n natural numbers is\n %d",sum);
}
