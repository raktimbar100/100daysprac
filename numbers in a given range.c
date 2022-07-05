//Sum of numbers in a given range
#include<stdio.h>
int main()
{
	int sum=0,s,f,i;
	 printf("Enter the starting range :");
	 scanf("%d",&s);
	 printf("Enter the final range :");
	 scanf("%d",&f);
	 for(i=s;i<=f;i++)
	 {
	 	sum+=i;
	 }
	 printf("Sum of number in given tange [%d to %d] is %d: ",s,f,sum);
	 
}
