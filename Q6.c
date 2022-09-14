// Prime Number series upto 100
#include<stdio.h>
int main()
{
    int n,i,j,k,l=0;
for(i=2;i<=100;i++)
{ l=0;
    for(j=2;j<=i/2;j++)
    {
        
        if(i%j==0)
        {
        l++;
        break;
        }   
    
    }
    if(l==0)
    {
        printf("%d ",i);
    }
}
}
