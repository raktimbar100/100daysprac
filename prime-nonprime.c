//prime-nonprime
#include<stdio.h>
int main()
{
	int n;
	
	while(!0)
	{
	printf("\t\t\tPrime-non prime checking\n");
	printf("Enter the number :");
	scanf("%d",&n);
	int i=2;
	while(i<n)
	{
		if(n%i==0)
		{
			printf("\n--------------------------\n");
			printf("%d is Not prime",n);
			printf("\n--------------------------\n");
			break;
		}
		else
		{
			printf("\n--------------------------\n");
			printf("%d is prime",n);
			printf("\n--------------------------\n");
			break;
		}
		i++;
		
	}
}
}
