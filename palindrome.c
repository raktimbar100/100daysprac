//palindrome number
#include<stdio.h>
int main()
{
	int n,temp,sum,rem;
	printf("Enter the number :");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
	if(temp == sum)
	{
		printf("%d is a palindrome number ",temp);
	}
	else{
		printf("%d is not palindrome ",temp);
	}
}
