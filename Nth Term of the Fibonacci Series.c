//Find the Nth Term of the Fibonacci Series 
#include<stdio.h>
int main()
{
	int n,a,b,next,i;
	printf("Enter nth term :");
	scanf("%d",&n);
	a=0;
	b=1;
	for(i=2;i<=n;i++)
	{
		next=a+b;
		a=b;
		b=next;
		
	}
	printf("%d",next);
}
