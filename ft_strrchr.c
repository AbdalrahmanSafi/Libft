/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absafi <absafi@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 13:22:55 by absafi            #+#    #+#             */
/*   Updated: 2026/09/22 17:07:55 by absafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

char	*ft_strrchr(const char *src, int goal_char)
{
	unsigned char	*temp;
	int				counter;

	counter = ft_strlen((char *) src);
	temp = (unsigned char *) & goal_char;
	if (*temp == '\0')
	{
		return ((char *) temp);
	}
	while (counter > 0)
	{
		if (src[counter] == goal_char)
		{
			return ((char *) & src[counter]);
		}
		counter--;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("%s\n", ft_strrchr("42 Amman", 0));
	printf("%s\n", strrchr("42 Amman", 0));
	return (0);
}
