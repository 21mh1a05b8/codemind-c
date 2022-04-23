#include<stdio.h>
int main()
{
    char str[100];
    int i,count=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
       if(str[i]>='0'&&str[i]<='9')
       {
           count++;
       }
    }
    if(count>0)
    {
        printf("Contains %d digit",count);
    }
    else
    {
        printf("Doesn't contain digit");
    }
    return 0;
}