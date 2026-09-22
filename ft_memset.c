/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absafi <absafi@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 10:25:26 by absafi            #+#    #+#             */
/*   Updated: 2026/09/22 10:48:53 by absafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *start, int byte, size_t num)
{
	unsigned char	*char_area_pointer;

	char_area_pointer = start;
	if (start)
	{
		while (num > 0)
		{
			*char_area_pointer = byte;
			num--;
			char_area_pointer++;
		}
	}
	return (start);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{

printf("mine: %s\n", (char *) ft_memset(str1, 'd', 4));
printf("original: %s\n", (char *) memset(str2, 'd', 4));
return (0);
}
*/
