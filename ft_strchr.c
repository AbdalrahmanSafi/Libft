/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absafi <absafi@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 11:15:37 by absafi            #+#    #+#             */
/*   Updated: 2026/09/22 17:00:56 by absafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *src, int goal_char)
{
	unsigned char	*temp;

	temp = (unsigned char *) & goal_char;
	if (*temp == '\0')
	{
		return ((char *) temp);
	}
	while (*src)
	{
		if (*src == goal_char)
		{
			return ((char *) src);
		}
		src++;
	}
	return (0);
}
/*

#include <stdio.h>
#include <string.h>

int	main(void)
{
printf("%s\n", ft_strchr("42 Amman", '7'));
printf("%s\n", strchr("42 Amman", '7'));
return (0);
}
*/
