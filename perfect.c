#include<stdio.h>
int main()
{
	int n,i,store=0;
	printf("Enter the number :");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			store+=i;
		}
	}
	if(store==n)
	
	{
		printf("%d is perfect number",n);
	}
	else{
		printf("%d is not perfect number",n);
	}
}
