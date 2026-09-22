/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absafi <absafi@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 13:40:42 by absafi            #+#    #+#             */
/*   Updated: 2026/09/22 18:30:29 by absafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t num)
{
	size_t	counter;

	if (num == 0)
		return (0);
	counter = 0;
	while (counter < num && str1[counter] == str2[counter]
			&& str1[counter])
	{
		counter++;
	}
	return (str1[counter] - str2[counter]);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	//	printf("%d\n", ft_strncmp("42 Amman", "42", 2));
	//	printf("%d\n", strncmp("42 Amman", "42", 2));
	printf("%c", -32447);
	return (0);
}
