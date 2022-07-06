#include<stdio.h>
int main()
{
	int n,temp,sum=0,rem,i;
	printf("Enter number :");
	scanf("%d",&n);
	temp=n;
	int temp1,temp2;
	for(i=10;i<=n;i++)
	{
	sum=0;
	temp1=i;
	temp2=temp1;
	while(temp1>0)
	{
		rem=temp1%10;
		sum+=rem;
		temp1/=10;
	}
	if(temp2%sum==0)
	{
		printf("%d ",temp2);
	}

  }
}
