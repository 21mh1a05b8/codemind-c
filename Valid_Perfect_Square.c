#include<stdio.h>
#include<math.h>
void squarenum(int n)
{
    int s;
    s=sqrt(n);
    if (s*s==n)
    {
        printf("True
");
    }
    else
    {
        printf("False
");
    }
}
int main()
{
    int n,i,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        squarenum(x);
    }
    return 0;
}