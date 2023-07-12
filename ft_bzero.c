#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*dest;

	i = 0;
	dest = s;
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
}
// *s dizisine n kadar null atar
// #include <stdio.h>
// int main()
// {
// 	char str[] = "Hello World";
// 	ft_bzero(str, 5);
// 	printf("%c\n", str[6]);
// 	return (0);
// }
