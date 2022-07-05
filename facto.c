//Factorial
#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the number to get the factorial:");
	scanf("%d",&n);
	int mul=1;
	for(i=n;i>=1;i--)
	{
		mul=mul * i;
	}
	printf("\nFactorial of %d is %d",n,mul);
}
