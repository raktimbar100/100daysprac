//resverse of a number 
#include<stdio.h>
int main()
{
	int n,rem,sum;
	printf("Enter the number :");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
	printf("reverse is %d",sum);
}
