/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absafi <absafi@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 01:15:40 by absafi            #+#    #+#             */
/*   Updated: 2026/09/23 22:39:23 by absafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	dst_size;
	size_t	src_counter;
	size_t	src_size;

	src_size = ft_strlen(src);
	dst_size = ft_strlen(dst);
	src_counter = 0;
	if (dsize <= dst_size)
	{
		return (dsize + src_size);
	}
	while (src[src_counter] && (dst_size + src_counter) < (dsize - 1))
	{
		dst[dst_size + src_counter] = src[src_counter];
		src_counter++;
	}
	dst[dst_size + src_counter] = '\0';
	return (dst_size + src_size);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
char	dest1[50] = "";
char	dest2[50] = "";
int		len1 = ft_strlcat(dest1, " gone girl", 0);
int		len2 = strlcat(dest2, " gone girl", 0);

printf("mine: dest= %s length: %zu\n", dest1, len1);
printf("original: dest= %s length: %zu\n", dest2, len2);
return (0);
}
*/
