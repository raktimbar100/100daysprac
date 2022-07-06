#include<stdio.h>
int main()
{
	int n1,n2,rem,sum=0,i;
	printf("Enter number 1:");
	scanf("%d",&n1);
	printf("Enter number 2:");
	scanf("%d",&n2);
	int sum1=0;
	int a,b;
	a=n1;
	b=n2;
printf("for Number 1 divisors are:\n(");
	for(i=1;i<n1;i++)
	{
		if(n1%i==0)
		{
			
			
			sum+=i;
			
			printf(" +%d ",i,a);
		}
	}
	printf(")/%d=%d",a,sum);	
	printf("\nfor Number 2 divisors are:\n(");
	for(i=1;i<n2;i++)
	{
		if(n2%i==0)
		{
			
			sum1+=i;
			printf(" +%d ",i,a);
		}
	}
		printf(")/%d=%d",b,sum);	
    if(sum/a==sum1/b)
    {
    	printf("\nAs from theory ,(%d = %d)",sum/a,sum1/b);
    	printf("\nwe can say,\n=>%d & %d is friendly pair",a,b);
	}
	else
	{
			printf("\n%d & %d is not friendly pair",a,b);
	}
}
