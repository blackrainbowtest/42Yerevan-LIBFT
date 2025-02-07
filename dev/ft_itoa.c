# include "libft"

static size_t	ft_num_len(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_convert_to_str(char *str, size_t len, unsigned int num)
{
	while (num > 0)
	{
		str[len - 1] = '0' + (num % 10);
		num /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char			*str;
	size_t			len;
	unsigned int	num;

	len = ft_num_len(n);
	str = (char *)ft_calloc(len + 1, (sizeof(char)));
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		num = n * -1;
	}
	else
		num = n;
	str = ft_convert_to_str(str, len, num);
	return (str);		
}