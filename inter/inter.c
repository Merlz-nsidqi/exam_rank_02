#include <unistd.h>

int rep(char s2, char *s1, int j)
{
    int i = 0;
    while(i < j)
    {
        if (s1[i] == s2)
            return 1;
        i++;
    }
    return 0;
}

void    inter(char *s1, char *s2){
    int i = 0;
    int j;
    while(s1[i]){
        j = 0;
        while (s2[j]){
            if (s1[i] == s2[j] && rep(s2[j], s1, i) == 0){
                write(1, &s1[i], 1);
                break ;
            }
            j++;
        }
        i++;
    }
}

int main(int ac, char **av){
    if (ac == 3)
        inter(av[1], av[2]);
    write(1, "\n", 1);
}