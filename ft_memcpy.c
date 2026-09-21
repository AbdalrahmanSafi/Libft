/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absafi <absafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 10:10:34 by username          #+#    #+#             */
/*   Updated: 2026/09/21 16:25:08 by absafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	unsigned char	*temp_src;
	unsigned char	*temp_dest;

	temp_src = (unsigned char *) src;
	temp_dest = (unsigned char *) dest;
	while (temp_src && num > 0)
	{
		*temp_dest = *temp_src;
		temp_dest++;
		temp_src++;
		num--;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
char	src[50] = "La la land";
char	dest[50] = "";

ft_memcpy(dest, src, 4);
printf("mine: %s\n", dest);
memcpy(dest, src, 4);
printf("original: %s\n", dest);
return (0);
}
*/
