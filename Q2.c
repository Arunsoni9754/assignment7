#include<stdio.h>
int main()
{
    int i=0,s=0,n,t=0,p=1;
    printf("ENter the number of terms:-");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        t=p;
        p=s;
        s=p+t;
    
    printf("%d,",s);
    }
    return 0;
}
