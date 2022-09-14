#include<stdio.h>
int main()
    {
        int n,i=0,j,s=0;
        for(n=1 ;n<=1000;n++)
        {  j=n;
            s=0;
            while(j!=0) 
            {
                i=j%10; 
                s=s+(i*i*i);
                j=j/10;
            }
        if(s==n)
        {
            printf("%d ",n);
        }
        }
    }
