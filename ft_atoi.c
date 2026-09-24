/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absafi <absafi@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 17:29:02 by absafi            #+#    #+#             */
/*   Updated: 2026/09/23 18:13:24 by absafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int	ft_isspace(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

int	ft_atoi(const char *nptr)
{
	int	value;
	int	sign;
	int	counter;

	sign = 1;
	value = 0;
	counter = 0;
	while (ft_isspace(nptr[counter]))
	{
		counter++;
	}
	if (nptr[counter] == '-')
	{
		sign = -1;
		counter++;
	}
	while (ft_isdigit(nptr[counter]))
	{
		value = (value * 10) + (nptr[counter] - '0');
		counter++;
	}
	return (sign * value);
}
/*
int	main(void)
{
printf("mine: %d\n", ft_atoi("\r \t--9"));
printf("original: %d\n", atoi("\r \t--9"));
return (0);
}
*/
