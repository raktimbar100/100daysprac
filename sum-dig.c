//sum of digits
#include<stdio.h>
int main()
{
	int n,rem,sum;
	printf("Enter the number :");
	scanf("%d",&n);
	int temp=n;
	while(n>0)
	{
		rem=n%10;
		sum+=rem;
		n=n/10;
		printf("+%d ",rem);
	}
	printf("=%d ",sum);
}
