#include <stdio.h>
int checkPrime(int num)
{
  
    if(num < 2){
        return 0;
    }
    else{   
    
        int x = num/2;
        int i;
        for(i = 2; i < x; i++)
        {
            if(num % i == 0)
            {
                return 0;
            }
        }
    }
    
    return 1;
}

int main()
{
    int a,b;
    printf("Enter initial number :");
    scanf("%d",&a);
    printf("\nenter final number :");
    scanf("%d",&b);
    int i;
    for(i=a; i <= b; i++){
        if(checkPrime(i))
            printf("%d ",i);
    }
 
    return 0;
}
