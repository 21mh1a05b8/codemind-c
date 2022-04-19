#include <stdio.h>
 int addDigits(int num)
{
        return num - (num - 1) / 9 * 9;
    }

int main()
{
    int n ;
    scanf("%d",&n);
    printf("%d",addDigits(n));
    return 0;
}
