#include<stdio.h>
 int main()
 {
    int a,b,i;
    printf("Enter the two numbers:-");
    scanf("%d %d",&a,&b);
    for(i=1;i<=a*b;i++)
    {
        if((i%a==0) && (i%b==0))
        {break;}
    }
    int h=a*b/i;
    printf("The HCF is %d",h);
 }
