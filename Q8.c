// Next prime number
#include<stdio.h>
int main()
{
    int n,i,j,l;
    printf("Enter the number ");
    scanf("%d",&n);
    for(i=n;i>0;i++)
    {l=0;
    
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                l++;
            }
        }
        if(l==2)
        {
            printf("The next prime number is %d",i);
            break;
        }
    }
}
