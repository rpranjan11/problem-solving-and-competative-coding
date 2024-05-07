#include<stdio.h>

int main()
{
    int t;
    int x,y,l,m,a,b;
    scanf("%d", &t);
    int i;
    for(i = 0; i < t; i++)
    {
        scanf("%d %d %d %d %d %d", &x, &y, &l, &m, &a, &b);
        if(((a + l) <= x) && ((b - m) >= 0))
        {
            printf("bottom-right\n");
            continue;
        }
        if(((a - l) >= 0) && ((b - m) >= 0))
        {
            printf("bottom-left\n");
            continue;
        }
        if(((a + l) <= x) && ((b + m) <= y))
        {
            printf("top-right\n");
            continue;
        }
        if(((a - l) >= 0) && ((b + m) <= y))
        {
            printf("top-left\n");
            continue;
        }

    }
    return 0;
}