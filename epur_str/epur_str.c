#include <unistd.h>

void    epur(char *s)
{
    int i = 0;
    while (s[i])
    {
        while((s[i] == ' ' || s[i] == '\t') && s[i])
            i++;
        while (s[i] != '\0' && (s[i] != '\t' && s[i] != ' '))
        {
            write(1, &s[i], 1);
            i++;
        }
        if (s[i] != '\0')
            i++;
        if (s[i] != '\0' && (s[i] != '\t' || s[i] != ' '))
            write(1, " ", 1);
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        epur(av[1]);
    write(1, "\n", 1);
}