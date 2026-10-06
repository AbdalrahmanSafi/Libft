/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_substr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: absafi <absafi@student.42amman.com>       #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/24 11:55:38 by absafi           #+#    #+#              */
/*   Updated: 2026/10/04 22:29:32 by absafi          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*buffer;
	size_t	src_size;

	src_size = ft_strlen(s);
	if (start > src_size)
	{
		buffer = malloc(1);
		if (!buffer)
			return (0);
		*buffer = 0;
		return (buffer);
	}
	if (len > src_size - start)
		len = src_size - start;
	buffer = malloc(len + 1);
	if (!buffer)
	{
		return (0);
	}
	ft_strlcpy(buffer, &s[start], len + 1);
	return (buffer);
}
/*
int	main(void)
{
char	src[] = "";

printf("%s\n", ft_substr(src, 2, 3));
return (0);
}
*/
