#include<stdio.h>
int main()
{
	int n,temp,sum=0,rem;
	while(1)
	{
	
	printf("Enter number :");
	scanf("%d",&n);
	temp=n;
     sum=0;
	 while(n>0)
	{
		rem=n%10;
		sum+=rem;
		n/=10;
	}
	if(temp%sum==0)
	{
		printf("%d is harshad number \n",temp);
	}
	else
	{
		printf("%d is not harshad number \n",temp);
	}
}
}
