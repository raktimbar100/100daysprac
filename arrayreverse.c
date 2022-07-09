#include<stdio.h>
int main()
{
	int arr[20];
	int n,i;
	int temp[20];
	printf("Enter the size :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",arr+i);
	}
	for(i=0;i<n;i++)
	{
		temp[i]=arr[n-1-i];
		
	}
	for(i=0;i<n;i++)
	{
		arr[i]=temp[i];
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",*(arr+i));
	}
}
