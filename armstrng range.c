#include<studio.h>
#include<math.h>
int main()
{
    int n, n1,n2,rem,i,sum=0,counter=0;
    printf("enter two numbers as range:");
    scanf("%d%d",&n1,&n2);
    for(i=n1;i<=n;i++);
    {
        n=i;
        sum=0;
        while (n>0)
        {
            rem=n%10;
            sum=sum+rem*rem*rem;
            n=n/10;
        }
        if(i==sum)
        {
            printf("%d",i);
            counter++;
        }
    }
    printf("\ntotal armstrong no in a given range:%d, counter");
    return 0; 
}