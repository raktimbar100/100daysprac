//armstrong number 
#include<stdio.h>
int main()
{
	int n,rem,temp,sum=0;
	printf("Enter the number ");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		rem=n%10;
		sum+=rem*rem*rem;
		n=n/10;
	}
	if(sum==temp)
	{
		printf("%d is an armstrong number",temp);
	}
	else
	{
			printf("%d is not an armstrong number",temp);
	}
}
