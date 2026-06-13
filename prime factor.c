#include<stdio.h>
void main()
{
    int largest prime factor(int n)
    {
        int maxprime=-1;
        while(n%2==0)
        {
            maxprime=2;
            n/=2;
        }
        for(int i=3;i*i<=n;i+=2)
        {
            while(n%i==0)
            {
                maxprime=i;
                n/=i;
            }
        }
        if(n>2)
        maxprime=n;
        return maxprime;
    }
}