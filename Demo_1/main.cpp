#include <stdio.h>

long output(long b,long i)
{
    if(b == (800 * i + 9 * i + 1))
        printf("%ld\t%ld",b,i);

    return 0;
}
int main()
{
    long int a = 0, b = 0, i = 0;
    a = 809;
    for ( i = 10;  i < 100; ++ i) {
        b = i * a;
        if ((8 * i) < 100 && (9 * i) >= 100)
        {
            output(b,i);
        }
    }
}