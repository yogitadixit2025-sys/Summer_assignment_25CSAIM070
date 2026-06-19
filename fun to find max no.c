#include<stdio.h>
int max(int a,int b)
{
    if(a>b)
      return a;
    else
     retrn b;
}
int main()
{
    int x,y;
    printf("Enter two no:");
    scanf("%d%d",&x,&y);
    printf("Maximum=%d",max(x,y));
    return 0;
}