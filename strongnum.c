#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number :");
	scanf("%d",&n);
	int alsum=0,sum=1,rem,temp,i;
	temp=n;
	while(n>0)
	{
		rem=n%10;
		for(i=rem;i>=1;i--)
		{
			
			sum*=i;
		}
		alsum+=sum;
		sum=1;
		n=n/10;
	}
	if(alsum==temp)
	{
		printf("%d is a strong number ",temp);
	}
	else{
		printf("%d is not a strong number",temp);
		
	}
	
}
