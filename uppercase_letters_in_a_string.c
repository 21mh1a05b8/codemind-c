#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    int upper=0,lower=0;
    char ch[100];
    scanf("%[^
]s",ch);
    for(i=0; ch[i]!=0; i++)
    {

    if(ch[i]>='A' && ch[i]<='Z'){
    upper++;
    }
    }
    printf("%d",upper);
    return 0;
}