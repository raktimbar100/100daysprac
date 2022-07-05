#include<stdio.h>
int main()
{
  int n,i,sum=0;
  printf("Enter the value of n:");
  scanf("%d",&n);
  for(i=1;i<n;i++)
  {
  	if(n%i==0)
  	{
  		sum+=i;
	  }
	}
	if(sum>n)
	{
		
		printf("%d\n%d\n",n,sum);
		printf("As %d > %d \n",sum,n);
		printf("%d is abundant number ",n);
		}	
		else
		{
			printf("%d\n%d\n",n,sum);
		printf("As %d > %d \n",n,sum2);
			printf("%d is not abundant number ",n);
			
		}
}
