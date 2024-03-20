#include <unistd.h>

void    rep(char *s)
{
    int i = 0;
    int t;
    while(s[i])
    {
        t = 0;
        if (s[i] == 'a' || s[i] == 'A')
            t = 1;
        else if (s[i] >= 'b' && s[i] <= 'z')
            t = s[i] - 'a' + 1;
        else if (s[i] >= 'B' && s[i] <= 'Z')
            t = s[i] - 'A' + 1;
        else
        {
            t = 0;
            write(1, &s[i], 1);
        }
        while (t != 0)
        {
            write(1, &s[i], 1);
            t--;
        }
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        rep(av[1]);
    write(1, "\n", 1);
}