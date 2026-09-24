/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absafi <absafi@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 13:40:42 by absafi            #+#    #+#             */
/*   Updated: 2026/09/23 11:14:42 by absafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t num)
{
	size_t	count;

	if (num == 0)
		return (0);
	count = 0;
	while (count < num - 1 && str1[count] == str2[count] && str1[count])
	{
		count++;
	}
	return (str1[count] - str2[count]);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
printf("%d\n", ft_strncmp("42 Amman", "42a", 2));
printf("%d\n", strncmp("42 Amman", "42a", 2));
return (0);
}
*/
