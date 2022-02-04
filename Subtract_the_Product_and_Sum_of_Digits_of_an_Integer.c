#include<stdio.h>
int main()
{
    int n,sum,product,a;
    scanf("%d",&n);
    sum=0;
    product=1;
    while(n>0)
    {
        sum+=n % 10;
        product*=n % 10;
        n/=10;
        a=product-sum;
    }
    printf("%d",a);
    return 0;
}