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
    if(h==1)
    {
        printf("They are co prime numbers");
    }
    else 
    {
        printf("They are not co prime numbers");
    }
 }
