/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absafi <absafi@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 01:15:40 by absafi            #+#    #+#             */
/*   Updated: 2026/09/25 18:00:06 by absafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	dst_size;
	size_t	src_size;

	src_size = ft_strlen(src);
	dst_size = ft_strlen(dst);
	if (dsize <= dst_size)
		return (dsize + src_size);
	ft_strlcpy(&dst[dst_size], src, dsize - dst_size);
	return (dst_size + src_size);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
char	dest1[50] = "Ahmad";
char	dest2[50] = "abd";
int		len1 = ft_strlcat(dest1, " gone girl", 1);
int		len2 = strlcat(dest2, " gone girl", 1);

printf("mine: dest= %s length: %u\n", dest1, len1);
printf("original: dest= %s length: %u\n", dest2, len2);
return (0);
}
*/
