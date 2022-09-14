#include<stdio.h>
int main()
{
    int i=0,s=0,n;
    printf("ENter the term which you need to see:-");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        s=s+i;
    }
    printf("%d",s);
    return 0;
}
