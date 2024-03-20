#include <libc.h>

int len(char *s)
{
    int i = 0;
    int c = 0;
    while (s[i])
    {
        while((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && s[i] != '\0')
            i++;
        if (s[i])
            c++;
        while((s[i] != ' ' && s[i] != '\t' && s[i] != '\n') && s[i] != '\0')
            i++;
    }
    return c;
}

// char * ft_strncpy(char *d, char *s, int l)
// {
//     int i = 0;
//     while (s[i] && i < l)
//     {
//         d[i] = s[i];
//         i++;
//         // st++;
//     }
//     d[i] = '\0';
//     return d;
// }

char    **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int s = 0;
    int x = 0;
    char **res;
    if (!str)
        return (NULL);
    int l = len(str);
    // printf("%d", l);
    res = (char **)malloc((l + 1) * sizeof(char *));
    if (!res)
        return (NULL);
    while (str[i] != '\0')
    {
        while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
        s = i;
        while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
            i++;
        i--;
        l = i - s + 1;
        if (l > 0){
            res[j] = malloc((l + 1) * sizeof(char));
            x = 0;
            while (x < l)
                res[j][x++] = str[s++];
            res[j][x] = '\0';
            j++;
            // res[j] = ft_strncpy(res[j], str + s, l);
        }
        i++;
    }
    res[j] = NULL;
    return (res);
}
// char    **ft_split(char *str)
// {
//     int i = 0;
//     int j = 0;
//     int s = 0;
//     char **res;
//     if (!str)
//         return (NULL);
//     int l = len(str);
//     // printf("%d", l);
//     res = (char **)malloc((l + 1) * sizeof(char *));
//     if (!res)
//         return (NULL);
//     while (str[i] != '\0')
//     {
//         while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
//             i++;
//         s = i;
//         while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
//             i++;
//         l = i - s;
//         if (l > 0){
//             res[j] = malloc((l + 1) * sizeof(char));
//             res[j] = ft_strncpy(res[j], str + s, l);
//             j++;
//         }
//         i++;
//     }
//     res[j] = NULL;
//     return (res);
// }

// int main(void)
// {
//     int i = 0;
//     // printf("%s", av[1]);
//     // fflush();
//     char **r = ft_split("words apart oiioio");
//     while (i<3)
//     {
//         printf("- %s \n", r[i]);
//         i++;
//     }
//     // printf("%s\n", r[i]);
// }