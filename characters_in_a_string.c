#include <stdio.h>
int main()
{
    char str[100];
    int i,count=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]!='  ')
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}