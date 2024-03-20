#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int len(char *s)
{
    int i = 0;
    while (s[i] == ' ' || s[i] == '\t')
        i++;
    while (s[i])
    {
        if (s[i] == ' ' || s[i] == '\t')
            break;
        i++;
    }
    return (i);
}

char *first(char *str, char *store)
{
    int i = 0;
    int j = 0;
    while (str[i] == ' ' || str[i] == '\t')
        i++;
    while (str[i])
    {
        if (str[i] == ' ' || str[i] == '\t')
            break;
        store[j] = str[i];
        i++;
        j++;
    }
    store[j] = '\0';
    return (store);
}

void    ro(char *str)
{
    int l = len(str) + 1;
    int i = l - 1;
    char *store = malloc(l * sizeof(char));
    store = first(str, store);
    if (str[i] != '\0')
    {
        while (str[i] == ' ' || str[i] == '\t')
            i++;
        while (str[i])
        {
            while ((str[i] == ' ' || str[i] == '\t') && str[i + 1] != '\0')
            {
                if (str[i + 1] != ' ' && str[i + 1] != '\t' && str[i + 1] != '\0')
                    write(1, " ", 1);
                i++;
            }
            write(1, &str[i], 1);
            i++;
        }
        if (str[i - 1] != ' ' && str[i - 1] != '\t')
            write(1, " ", 1);
    }
    i = 0;
    while (store[i])
    {
        write(1, &store[i], 1);
        i++;
    }
    free(store);
}

int main(int ac, char **av)
{
    if (ac == 2)
        ro(av[1]);
    else if (ac > 2)
    {
        int i = 0;
        while (av[1][i])
        {
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}
