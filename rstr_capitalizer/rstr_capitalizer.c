#include <unistd.h>

char *lower(char *s)
{
    int i = 0;
    while(s[i])
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 32;
        i++;
    }
    return (s);
}

void    rstr(char *s)
{
    int i = 0;
    s = lower(s);
    while (s[i])
    {
        while ((s[i] == ' ' || s[i] == '\t') && s[i])
            i++;
        while (s[i] != ' ' && s[i] != '\t' && s[i])
            i++;
        if (s[i - 1] >= 'a' && s[i - 1] <= 'z')
            s[i - 1] = s[i - 1] - 32;
        i++;
    }
    i = 0;
    while (s[i])
    {
        write(1, &s[i], 1);
        i++;
    }
    write(1, "\n", 1);
}

int main(int ac, char **av){
    if (ac != 1){
        int i = 1;
        while (i < ac){
            rstr(av[i]);
            i++;
        }
    }
    else
        write(1, "\n", 1);
}
