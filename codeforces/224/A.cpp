#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void swap(int a, int b){
    int tmp = a;
    a=b;
    b=tmp;
}
    
int main()
{
    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);
    int d = sqrt(a*c/ b), e = sqrt(a*b / c), f = sqrt(b*c / a);
    printf("%d", 4*(d+e+f));
    return 0;
}