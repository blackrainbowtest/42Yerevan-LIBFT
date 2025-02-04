#include "libft.h"

void    *ft_calloc(size_t num, size_t size)
{
    void    *arr;

    if (num == 0 || size == 0)
        return (NULL);
    if ((size_t) - 1 / num < size)
        return (NULL);
    arr = (void *)malloc(size * num);
    if (!arr)
        return (NULL);
    ft_bzero(arr, size * num);
    return (arr);
}