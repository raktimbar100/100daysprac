//power of a number
#include<stdio.h>
int main()
{
	int n,p;
	printf("Enter the number :");
	scanf("%d",&n);
	printf("\nEnter the power of the number you want to find:");
	scanf("%d",&p);
	int i;
	int res=1;
	for(i=1;i<=p;i++)
	{
		res=res*n;
	}
	printf("Value after calculating is :%d",res);
}
