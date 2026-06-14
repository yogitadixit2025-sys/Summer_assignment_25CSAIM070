#include<stdio.h>
int power(int x,int n)
{
    int result=1;
    for(int i=1;i<=n;i++)
    {
        result=result*x;
    }
    return result;
}
int main()
{
    int x,n;
    printf("Enter x and n:");
    scanf("%d%d",&x, &n);
    printf("%d^%d=%d",x,n,power(x,n));
    return 0;
}