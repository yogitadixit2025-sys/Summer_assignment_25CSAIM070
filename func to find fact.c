#include<stdio.h>
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
        f=f*i;
    return f;
}
int main()
{
    int n;
    printf("Enter no:");
    scanf("%d",&n);
    printf("factorial=%d",fact(n));
    return 0;
}