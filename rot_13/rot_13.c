#include <unistd.h>

void rot(char *s)
{
    int i = 0;
    while (s[i])
    {
        if((s[i] >= 'A' && s[i] <= 'M') || (s[i] >= 'a' && s[i] <= 'm'))
            s[i] = s[i] + 13;
        else if((s[i] >= 'M' && s[i] <= 'Z') || (s[i] >= 'm' && s[i] <= 'z'))
            s[i] = s[i] - 13;
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