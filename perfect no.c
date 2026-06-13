#include<stdio.h>
void main()
{
    int n,sum=0;
    printf("Enter a no:");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    printf("perfect no:");
    else
    printf(" not perfect no:");
return 0;
}
