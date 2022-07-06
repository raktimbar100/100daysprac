#include<stdio.h>
int main()
{
	int n,i,rem,j,sum=0;
	printf("Enter the value:");
	scanf("%d",&n);
	for(i=2;n>1;i++)
	{
		 while(n%i==0)
		 {
		 	 printf("%d ", i);             
             n = n / i;
		 }
		 
	}
	
	return 0;
}
