int ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    while (s1[i])
    {
        if (s1[i] != s2[i])
            break ;
        i++;
    }
    return (s1[i] - s2[i]);
}