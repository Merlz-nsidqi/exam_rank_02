#include <unistd.h>
#include <stdlib.h>

int len(char *s)
{
    int i = 0;
    while (s[i])
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            i++;
        i++;
    }
    return (i);
}

void    casn(char *s)
{
    int l = len(s);
    char *res = malloc(sizeof(char) * (l + 1));
    int i = 0;
    int j = 0;
    while (s[i])
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            res[j] = '_';
            s[i] = s[i] + 32;
            j++;
        }
        res[j] = s[i];
        j++;
        i++;
    }
    res[j] = '\0';
    i = 0;
    while (res[i])
    {
        write(1, &res[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        casn(av[1]);
    write(1, "\n", 1);
}