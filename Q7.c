//Prime number series upto N
#include<stdio.h>
int main()
{
    int n,i,j,l;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
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
