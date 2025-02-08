#include "libft.h"

void	ft_putnbr(int n, int fd)
{
	char	*str;

	if (!n)
	{
		return ;
	}
	str = ft_itoa(n);
	if (!str)
		return ;
	ft_putstr_fd(str, fd);
	free(str);
}
