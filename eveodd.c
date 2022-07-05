//Even or Odd number:
#include<stdio.h>
int main()
{
  int n;
  while(1)
  {
    printf("\t\t\tCHECK EVEN ODD\n");
	printf("\nEnter a number :");
    scanf("%d",&n);
	if(n%2==0)
	{
		printf("\n--------------------------\n");
		printf("%d is an even number ",n);
		printf("\n--------------------------\n");
	}
	else{
		printf("\n--------------------------\n");
		printf("%d is odd number ",n);
		printf("\n--------------------------\n");
	}		
  }	
}
