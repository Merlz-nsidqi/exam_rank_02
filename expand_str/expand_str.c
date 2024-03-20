#include <unistd.h>

void    ex(char *s)
{
    int i = 0;
    while((s[i] == ' ' || s[i] == '\t') && s[i])
            i++;
    while (s[i] != ' ' && s[i] != '\t' && s[i])
    {
        write(1, &s[i], 1);
        i++;
    }
    while (s[i])
    {
        while((s[i] == ' ' || s[i] == '\t') && s[i])
            i++;
        if (s[i] != ' ' && s[i] != '\t' && s[i] != '\0')
            write(1, "   ", 3);
        while (s[i] != ' ' && s[i] != '\t' && s[i])
        {
            write(1, &s[i], 1);
            i++;
        }
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        ex(av[1]);
    write(1, "\n", 1);
}