#include <unistd.h>

void    rep(char *l, char r, char w)
{
    int i = 0;
    while (l[i])
    {
        if (l[i] == r)
            write(1, &w, 1);
        else
            write(1, &l[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 4 && (av[2][1] == '\0' || av[3][1] == '\0'))
        rep(av[1], av[2][0], av[3][0]);
    write(1, "\n", 1);
}