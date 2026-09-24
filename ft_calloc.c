/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absafi <absafi@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 21:26:12 by absafi            #+#    #+#             */
/*   Updated: 2026/09/24 11:48:26 by absafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	unsigned char	*cal_buf;

	if (!n || !size || (size * n) > 2147483647)
	{
		cal_buf = malloc(1);
		if (!cal_buf)
		{
			return (NULL);
		}
		*cal_buf = 0;
		return (cal_buf);
	}
	cal_buf = (unsigned char *) malloc(n * size);
	if (!cal_buf)
	{
		return (0);
	}
	ft_bzero(cal_buf, n * size);
	return (cal_buf);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int	main(void)
{
void	*original;
void	*mine;

original = calloc(INT_MAX, 2);
mine = ft_calloc(INT_MAX, 2);
printf("%d\n", INT_MAX);
free(original);
free(mine);
return (0);
}*/
