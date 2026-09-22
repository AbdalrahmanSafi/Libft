/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absafi <absafi@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 16:30:09 by absafi            #+#    #+#             */
/*   Updated: 2026/09/22 10:48:51 by absafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	const_strlen(const char *string)
{
	size_t	counter;

	counter = 0;
	while (string[counter])
	{
		counter++;
	}
	return (counter);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	counter;

	counter = 0;
	if (size > 0)
	{
		while (src[counter] && counter < size - 1)
		{
			dest[counter] = src[counter];
			counter++;
		}
		dest[counter] = '\0';
	}
	return (const_strlen(src));
}
/*
#include <bsd/string.h>
#include <stdio.h>

int	main(void)
{
char	dest1[] = "La la land";
char	dest2[] = "La la land";
int		wished_size1 = ft_strlcpy(dest1, "Today is 21/9/2026", 18);
int		wished_size2 = strlcpy(dest2, "Today is 21/9/2026", 18);
return (0);
}
*/
