#include <libc.h>

void ro(char *s){
    int i = 0;
    while((s[i] == ' ' || s[i] == '\t') && s[i])
        i++;
    while(s[i] != ' ' && s[i] != '\t' && s[i])
        i++;
    while((s[i] == ' ' || s[i] == '\t') && s[i])
        i++;
    while(s[i])
    {
        while(s[i] == ' ' || s[i] == '\t' && s[i])
            i++;
        while (s[i] != ' ' && s[i] != '\t' && s[i])
        {
            write(1, &s[i], 1);
            i++;
        }
        if (s[i] == ' ' || s[i] == '\t' || s[i] == '\0')
        {
            if((s[i] == ' ' || s[i] == '\t') && s[i + 1] == '\0')
                i++;
            write(1, " ", 1);
        }
    }
    i = 0;
    while(s[i] == ' ' || s[i] == '\t' && s[i])
        i++;
    while(s[i] != ' ' && s[i] != '\t' && s[i]){
        write(1, &s[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        ro(av[1]);
    else if (ac != 1)
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