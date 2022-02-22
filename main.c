#include <stdio.h>

int main()
{
    int n;
    char s;
    while(scanf("%c%d",&s,&n))
    {
        while(n--)
        {
            printf("%c",s);
        }
    }
    return 0;
}
