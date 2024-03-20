#include <libc.h>

int max(int *tab, unsigned int len)
{
    int i = 0;
    if (len == 0)
        return 0;
    int l = tab[i];
    while (i < len)
    {
        if (l < tab[i])
            l = tab[i];
        i++;
    }
    return (l);
}

// int main()
// {
//     int tab[] = {1, 6, 5, 7};
//     printf("%d", max(tab, 4));
// }