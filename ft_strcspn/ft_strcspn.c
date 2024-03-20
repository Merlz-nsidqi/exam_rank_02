#include <stdio.h>

size_t  ft_strcspn(const char *s, const char *reject)
{
    size_t i = 0;
    while (s[i])
    {
        if (s[i] == reject[0])
            break;
        i++;
    }
    return (i);
}