#include<stdio.h>
int main()
{
    int n;
    printf("Enter the no:");
    scanf("%d",&n);
    int b=n,digit, factorial,sum=0;
    while (b>0)
    {
        factorial=1;
        digit=b%10;
        for(int i=1;i<=digit;i++)
        {
            factorial=factorial*i;
        }
        sum+=factorial;
        b=b/10;
    }
    if(n==sum)
    {
        printf("the given no is strng no:");
    }
    else
    {
        printf("not a strng no:");
    }
    return 0;
}