#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int po(int x, int y)
{
    int z=1;
    z *= x;
    z *= y;
    return z;
}
int main()
{
    int a,b,c=1,n;
    scanf("%d", &n);
    a = po(n, 100);
    for (b = 1; b <= a; b++)
    {
        if ((b == 1 || b % 2 == 0 || b % 3 == 0 || b % 5 == 0 || b % 7 == 0)
            && (b != 2 && b != 3 && b != 5 && b != 7))
        {
            continue;
        }
        if (c == n)
        {
            printf("the %d prime is %d ", n, b );
        }
        c++;
    }
    return 0;
}