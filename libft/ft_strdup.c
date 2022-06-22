#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	i;
	char	*p1;
	size_t	index;

	index = 0;
	i = ft_strlen(str);
	p1 = malloc(1 * (i + 1));
	if (!p1)
		return (NULL);
	while (str[index])
	{
		p1[index] = str[index];
		index++;
	}
	p1[index] = '\0';
	return (p1);
}
