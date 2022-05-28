#include<stdio.h>
int main()
{
    int n,e=0,o=0,c=0,r;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        if (r%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
        c++;
        n=n/10;
    }
    if (e==c)
    {
        printf("Even");
    }
    else if(o==c)
    {
        printf("Odd");
    }
    else
    {
    printf("Mixed");
    }
}