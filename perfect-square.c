#include<stdio.h>
#include<math.h>
int main()
{
	int n,d,i;
	printf("enter the number :");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		if(n==i*i)
		{
			printf("%d is a perfect square",n);
	      return 0;
		}
	
		
	}
		printf("%d is not a perfect square",n);
		return 0;
}
