#include<stdio.h>
int main()
{
	int arr[50];
	int n;
	printf("Enter the size :");
	scanf("%d",&n);
	int sum=0,i;
	for(i=0;i<n;i++)
	{
		scanf("%d",arr+i);
	}
	for(i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	printf("Sum is :%d",sum);
}
