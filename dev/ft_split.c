#include "libft.h"

// free memory on any error **arr
static char	**ft_free(char **split, int size)
{

	return (0);
}

// detect words using sperator
static size_t	ft_word_count(const char *s, char c)
{
	size_t	word_count;

	word_count = 0;
	

	return (word_count);
}

// make dynamic array memory my word len + 1 use strdup()?
static char	**ft_dynamic_array(const char *s, char c, char ** split_arr, size_t word_count)
{
	return (split_arr);
}




char	**ft_split(const char *s, char c)
{
	char	**split_arr;
	size_t	word_count;

	if (!s)
		return (NULL);
	word_count = ft_word_count(s, c);
	split_arr = (char **)ft_calloc(word_count + 1, sizeof(char *));
	if (!split_arr)
		return (NULL);
	split_arr = ft_dynamic_array(s, c, split_arr, word_count);
	return (split_arr);
}