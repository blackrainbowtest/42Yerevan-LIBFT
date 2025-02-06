#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	size;
	size_t	len;
	char	*strtrim;

	if (!s1 || !set)
		return (NULL);
	size = ft_strlen(s1) - 1;
	while (*s1)
	{
		if (!ft_strchr(set, *s1))
			break;
		s1++;
	}
	while (s1[size])
	{
		if (!ft_strchr(set, s1[size]))
			break;
		size--;
	}
	len = ft_strlen(ft_substr(s1, 0, size));
	strtrim = (char *)ft_calloc(len + 1, sizeof(char));
	if (!strtrim)
		return (NULL);
	return (strtrim);
}