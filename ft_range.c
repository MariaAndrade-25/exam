

#include <stdlib.h>

int *ft_range(int start, int end)
{
    int i = 0;
    int *res;
    int current;
    int len;

    if (start <= end)
        len = end - start + 1;
    else
        len = start - end + 1;
    res = malloc(sizeof(int) * (len));
    if (!res)
        return (NULL);
    if (end > start)
        current = start;
    else
        current = end;
    
    while (i < len)
    {
        res[i] = current;
        current++;
        i++;
    }
    return (res);
}
