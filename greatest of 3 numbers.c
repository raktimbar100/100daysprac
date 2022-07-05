//greatest of 3 numbers
#include<stdio.h>
int main()
{
	while(!0)
	{
	
	int a,b,c;
	printf("\t\t\tGreatest of 3 numbers \n");
	printf("Number 1:");
	scanf("%d",&a);
	printf("\nNumber 2:");
	scanf("%d",&b);
	printf("\nNumber 3:");
	scanf("%d",&c);
	
	if(a>b &&  a>c)
	{
		printf("\n--------------------------\n");
		printf("Number 1:%d is greatest among 3 numbers",a);
		printf("\n--------------------------\n");
		
	}
	else if(b>a && b>c)
	{
		printf("\n--------------------------\n");
		printf("Number 2:%d is greatest among 3 numbers",b);
		printf("\n--------------------------\n");
	}
	else if(a==b && b==c)
	{
		printf("\n--------------------------\n");
		printf("All are same Number \nNumber 1=Number 2=Number 3");
		printf("\n--------------------------\n");
	}
	else
	{
		printf("\n--------------------------\n");
		printf("Number 3:%d is greatest among 3 numbers",c);
		printf("\n--------------------------\n");
	}
	
}



}
