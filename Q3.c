#include<stdio.h>
int main()
{
    int i=0,s=0,n,t=0,p=1;
    printf("ENter the number you want to check:-");
    scanf("%d",&n);
    
    for(i=0;i<=n;i++)
    {
        t=p;
        p=s;
        s=p+t;
    }
        if(s==n)
    {
        printf("This number is in fibonacci series");
    }
    else
    {    printf("This is not a fibonacci number");
    }
    
    return 0;
}
