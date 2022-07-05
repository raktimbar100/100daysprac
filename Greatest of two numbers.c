//Greatest of two numbers/equality: 
#include<stdio.h>
int main()
{
	int a,b;
	while(1)
	{
	
	printf("\t\t\tGreatest of two numbers \n");
	printf("Number 1 :");
	scanf("%d",&a);
	printf("\nNumber 2: ");
	scanf("%d",&b);
	if(a>b)
	{
		printf("\n--------------------------\n");
		printf("Number 1:%d is greater than number 2:%d",a,b);
		printf("\n--------------------------\n");
	}
	else if(a<b){
		printf("\n--------------------------\n");
		printf("Number 2:%d is greater than number 1:%d",b,a);
		printf("\n--------------------------\n");
	}
	else{
		printf("\n--------------------------\n");
		printf("Number 1:%d is equal to number 2:%d",a,b);
		printf("\n--------------------------\n");
	}
}
}
