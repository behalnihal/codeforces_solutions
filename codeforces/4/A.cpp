#include<stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    if(x==2 || x%2!=0)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
    return 0;
}