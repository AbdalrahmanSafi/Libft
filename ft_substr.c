/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absafi <absafi@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 11:55:38 by absafi            #+#    #+#             */
/*   Updated: 2026/09/24 14:18:26 by absafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*buffer;

	buffer = malloc(len + 2);
	if (!buffer)
	{
		return (0);
	}
	ft_strlcpy(buffer, &s[start], len + 2);
	return (buffer);
}
/*
#include <stdio.h>

int	main(void)
{
char	src[] = "La laland";

printf("%s\n", ft_substr(src, 2, 3));
return (0);
}
*/
