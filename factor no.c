#include<stdio.h>
int main()
{
    int i,num;
    printf("Enter the integer no:");
    scanf("%d",&num);
    printf("factors of %d are:\n",num);
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            printf("%d",i);
        }
    }
    return 0;
}