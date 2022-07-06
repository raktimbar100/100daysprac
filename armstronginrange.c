#include<stdio.h>
#include<math.h>
int main()
{
	int i,f,j,rem,store=0,l,count=0;
	printf("Enter initial :");
	scanf("%d",&i);
	printf("\nEnter final bound:");
    scanf("%d",&f);
    
    for(j=i;j<=f;j++)
    {
       l=j;
       int t=l;
       store=0;
       count=0;
       while(t>0)
       {
       	count++;
       	t=t/10;
	   }
    while(l>0)
    	{
    		rem=l%10;
    		store+=pow(rem,count);
    		l/=10;
		}
		if(store==j)
		{
			printf("%d ",j);
		}
		
		
	}
 }
