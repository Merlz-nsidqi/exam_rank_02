#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
int len(int nbr)
{
    int c = 0;
    if (nbr < 0)
    {
        c++;
        nbr = nbr * -1;
    }
    while (nbr > 0)
    {
        nbr = nbr / 10;
        c++;
    }
    return c;
}

char    *ft_itoa(int nbr)
{
    if (nbr == 0)
        return ("0");
    if (nbr == INT_MIN)
        return ("-2147483648");
    int l = len(nbr);
    char *res = malloc(l + 1);
    res[l + 1] = '\0';
    if (nbr < 0){
        res[0] = '-';
        nbr = nbr * -1;
    }
    while (nbr > 0){
        l--;
        res[l] = (nbr % 10) + '0';
        nbr = nbr / 10;
    }
    return res;
}

// int main(){
//     printf("%s\n", ft_itoa(-2147483648));
// }