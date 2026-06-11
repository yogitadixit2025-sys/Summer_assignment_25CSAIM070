#include<stdio.h>
#include<conio.h>
void main()
{
    int n1,n2,i,j;
    clrscr();
    printf("Enter two numbers");
    scanf("%d%d",&n1,&n2);
    for (i=n1;i<=n2;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
            break;
        }
        if(i==j)
        printf("%d",j);
    }
}