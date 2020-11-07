#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
	// printf("%d\n", ft_strncmp("abcdefgh", "abcdwxyz", 4));
	// printf("%d\n", strncmp("abcdefgh", "abcdwxyz", 4));
	// printf("%d\n", ft_strncmp("", "11", 4));
	char s[12] = "abc";
	// printf("%d\n", strncmp("", "11", 4));
	// printf("%d\n", ft_strncmp("", "1", 1));
	// printf("%zu\n", strlen(s));
	printf("%zu\n", strlcat(s, "123", 8));
	printf("[%s]\n", s);
}


char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	if (!*needle)
		return ((char *)(haystack));
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] && haystack[i + j] == needle[j] && i + j < len)
		{
			j++;
			if (!needle[j])
				return ((char *)(haystack + i));
		}
		i++;
	}
	return (NULL);
}
