#include<stdio.h>
int countsetbits(int n)
{
    int count=0;
    while (n)
    {
        n=n&(n-1);
        count++;
    }
    return count;
}
int main()
{
    int num=13;
    printf("number of set bits=%d",countsetbits(num));
    return 0;
}