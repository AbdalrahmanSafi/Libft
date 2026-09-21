/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absafi <absafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 16:02:39 by username          #+#    #+#             */
/*   Updated: 2026/09/21 16:25:01 by absafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	char	buffer[1];
	size_t	buf_size;

	buf_size = ft_strlen(((char *) src));
	ft_memcpy(buffer, (char *) src, buf_size);
	return (ft_memcpy(dest, buffer, buf_size));
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
char	src[50] = "Abdelrahman";
char	src2[50] = "Abdelrahman";

printf("mine: %s\n", (char *) ft_memmove(src, "Ahmad", 4));
printf("original: %s\n", (char *) memmove(src, "Ahmad", 4));
return (0);
}
*/
