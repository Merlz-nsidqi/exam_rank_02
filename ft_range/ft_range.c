#include <stdlib.h>

int *ft_range(int start, int end)
{
    int i = 0;
    int *res;
    
    if (end >= 0){
        res = malloc((end - start) * sizeof(int));
        if (res == 0)
            return (0);
        while (start != end + 1)
        {
            res[i] = start;
            i++;
            start++;
        }
    }
    else
    {
        res = malloc((start - end) * sizeof(int));
        if (res == 0)
            return (0);
        while (start >= end)
        {
            res[i] = start;
            i++;
            start--;
        }
    }
    return (res);
}
