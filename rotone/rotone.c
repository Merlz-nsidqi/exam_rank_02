#include <unistd.h>

void    rot(char *s)
{
    int i = 0;
    while(s[i])
    {
        if ((s[i] >= 'a' && s[i] <= 'y') || s[i] >= 'A' && s[i] <= 'Y')
            s[i] = s[i] + 1;
        else if (s[i] == 'z')
            s[i] = 'a';
        else if (s[i] == 'Z')
            s[i] = 'A';
        write(1, &s[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        rot(av[1]);
    write(1, "\n", 1);
}