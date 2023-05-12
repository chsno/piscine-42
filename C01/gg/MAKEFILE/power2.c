int power2(unsigned int n)
{
    unsigned long i;
    i = 1;
    while (i < 0xffffffff)
        {
            if (i == n)
                return (1);
                i *= 2;
                        }
        return (0);
}

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    unsigned int c = 128;
    printf("%d", power2(c));
    return 0;
}