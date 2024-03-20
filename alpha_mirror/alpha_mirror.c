#include <unistd.h>

void    mir(char *s)
{
    int i = 0;
    unsigned int t = 0;
    while (s[i])
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = 'Z' - (s[i] - 'A');
        else if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = 'z' - (s[i] - 'a');
        write(1, &s[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        mir(av[1]);
    write(1, "\n", 1);
}
