#include "libft.h"

char    *ft_strdup(const char *s)
{
    size_t  len;
    char    *str;

    len = ft_strlen(s);
    str = (char *)ft_calloc(len + 1, sizeof(char));
    if (!str)
        return (NULL);
    ft_memcpy(str, s, len + 1);
    return (str);
}