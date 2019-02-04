#include<stdio.h>
int main()
{
    int a,r,b=0;
    scanf("%d",&a);
    while(a>0)
    {
    r=a%2;
    if(r==1)
    ++b;
    a=a/2;
    }
    printf("%d",b);
    
}
