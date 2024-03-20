#include <libc.h>

int len(char *s)
{
    int i = 0;
    while (s[i])
        i++;
    return i;
}

int main(int ac, char **av)
{
    if (ac == 3)
    {
        int i = 0;
        int j = 0;
        int flag = 0;
        while (av[2][i])
        {
            if (av[1][j] == av[2][i])
            {
                j++;
                flag++;
            }
            i++;
        }
        if (flag == len(av[1]))
            write(1, "1", 1);
        else
            write(1, "0", 1);
    }
    write(1, "\n", 1);
}