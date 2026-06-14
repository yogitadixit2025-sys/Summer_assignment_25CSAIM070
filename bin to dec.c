#include<stdio.h>
int main()
{
    int rem,num,b_num,d_num=0,base=1;
    printf("Enter binary number:");
    scanf("%d",&num);
    b_num=num;
    while(num!=0)
    {
        rem=num%10;
        d_num=d_num+(rem*base);
        base=base*2;
        num=num/10;
    }
    printf("Binary no is %d",b_num);
    printf("\nDecimal no is %d",d_num);
    return 0;
}