#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	counter;

	counter = 0;
	while (s[counter])
	{
		if (s[counter] == (unsigned char)c)
			return (&((char *)s)[counter]);
		counter++;
	}
	if ((unsigned char)c == s[counter])
		return (&((char *)s)[counter]);
	return (NULL);
}
