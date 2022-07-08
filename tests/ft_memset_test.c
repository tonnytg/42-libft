//
// Created by Antonio Thomacelli on 07/07/22.
//

#include <stdio.h>
#include <assert.h>
#include <string.h>

void	*ft_memset(void *word, int latter, size_t length);

int	main()
{
	char	str[] = "hello world";
	char	*expected = "aaalo world";
	int i;

	ft_memset(str, 'a', 3);
	i = 0;
	while (str[i] != '\0')
	{
		assert(str[i] == expected[i]);
		printf("%c", str[i]);
		i++;
	}
	return (0);
}