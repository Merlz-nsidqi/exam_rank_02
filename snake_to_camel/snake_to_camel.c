#include <libc.h>

int len(char *s)
{
    int i = 0;
    int c = 0;
    while (s[i])
    {
        if (s[i] == '_')
            c--;
        c++;
        i++;
    }
    return c;
}

void    snamel(char *s)
{
    int l = len(s);
    int i = 0;
    int j = 0;
    char *str = malloc(l + 1);
    while(s[i])
    {
        if (s[i] == '_')
        {
            i++;
            s[i] = s[i] - 32;
        }
        str[j] = s[i];
        j++;
        i++;
    }
    str[j] = '\0';
    j = 0;
    while(str[j])
    {
        write(1, &str[j], 1);
        j++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        snamel(av[1]);
    write(1, "\n", 1);
}