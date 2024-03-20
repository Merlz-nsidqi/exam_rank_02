#include <libc.h>

void    fprime(int n)
{
    int i = 2;
    if (n == 1){
        printf("1");
        return ;
    }
    while (n > 1)
    {
        if (n % i == 0){
            printf("%d", i);
            if (n != i)
                printf("*");
            n = n / i;
            i = 2;
        }
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        fprime(atoi(av[1]));
    }
    printf("\n");
}