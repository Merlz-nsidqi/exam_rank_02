#include <unistd.h>

void    print_bits(unsigned char octet)
{
    int i;
    int t;

    i = 7;
    while (i >= 0)
    {
        t = ((octet >> i) & 1) + '0';
        write(1, &t, 1);
        i--;
    }
}