//
// Created by Antonio Thomacelli on 07/07/22.
//

#include <stdio.h>
#include <assert.h>

char	**ft_split(char const *s, char c);

int	main()
{
	char	**a;
	int	i;

	printf("receive: Abracadabra\t split: c\n");
	a = ft_split("Abracadabra", 'c');

	i = 0;
	while (a[i] != NULL)
		printf("%s\n", a[i++]);
	return (0);
}