//Find Factor
#include<stdio.h>
int main()
{
  int n,i;
  printf("Enter the number :");
  scanf("%d",&n);
  printf("Factors are :\n");
  for(i=1;i<=n;i++)
  {
  	if(n%i==0)
     {
       printf("%d ",i);	
	 }  	
  }	
}
