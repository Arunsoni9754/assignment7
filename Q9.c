#include<stdio.h>
int main()
    {
        int n,i=0,j,s=0;
        printf("Enter the number ");
        scanf("%d",&n);
        j=n;
        while(n!=0)
        { 
            i=n%10;
            s=s+(i*i*i);
            n=n/10;

        }
        if(s==j)
        {
            printf("The number is Armstrong number");
        }
        else
        {
            printf("The number is not armstrong");
        }
    }
