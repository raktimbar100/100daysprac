//fibonacci series 
#include<stdio.h>
int main()
{
	int a,b,n,i,next;
	printf("Enter nth term :");
	scanf("%d",&n);
	a=0;
	b=1;
	printf("%d ,%d ",a,b);
	for(i=2;i<n;i++)
	{
		next=a+b;
		a=b;
		b=next;
		printf(",%d ",next);
	}
	
}
