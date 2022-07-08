//
// Created by Antonio Thomacelli on 07/07/22.
//

#include <stdio.h>
#include <string.h>
#include <assert.h>

void	*ft_memmove(void *dest, const void *src, size_t n);

int	main()
{
	unsigned char	src[] = " world!";
	unsigned char	dst[13] = "hello";
	unsigned char	src2[] = " world!";
	unsigned char	dst2[13] = "hello";
	int i;

	ft_memmove(dst, src, 7);
	memmove(dst2, src2, 7);

	i = 0;
	while (dst[i] != '\0')
	{
		assert( dst[i] == dst2[i]);
		i++;
	}
	printf("dst:\t%s\n", dst);
	printf("dst2:\t%s\n", dst2);
}