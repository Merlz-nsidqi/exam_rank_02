#include <unistd.h>

void    putnbr(int n)
{
    if (n < 0)
    {
        n = -n;
        write(1, "-", 1);
    }
    if (n < 10)
    {
        n = n + '0';
        write(1, &n, 1);
    }
    else
    {
        putnbr(n / 10);
        putnbr(n % 10);
    }
}

int ft_atoi(char *s)
{
    int res = 0;
    int sign = 1;
    int i = 0;
    if(s[i] == '-'){
        sign = -1;
        i++;
    }
    while(s[i])
    {
        res = res * 10 + s[i] - '0';
        i++;
    }
    return (res * sign);
}

void    muta(int s)
{
    int i = 1;
    int res = 0;
    while (i < 10)
    {
        putnbr(i);
        write(1, " x ", 3);
        putnbr(s);
        write(1, " = ", 3);
        res = i * s;
        putnbr(res);
        write(1, "\n", 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        muta(ft_atoi(av[1]));
    else
        write(1, "\n", 1);
}