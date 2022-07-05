#include<stdio.h>
int main()
{
  int n;
  printf("Enter the number:");
  scanf("%d",&n);
  int sq=n*n;
  int temp=n;
  while(n>0)
  {
  	if(n%10!=sq%10)
  	{
  		printf("Not automorphic");
  		exit(0);
	  }
	  n/=10;
	  sq/=10;
  }
  printf("\n%d is automorphic ",temp);

}
