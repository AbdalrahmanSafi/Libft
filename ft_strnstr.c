/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absafi <absafi@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 15:20:05 by absafi            #+#    #+#             */
/*   Updated: 2026/09/23 17:28:44 by absafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	compair(const char *str1, const char *str2, size_t num)
{
	size_t	count;

	if (num == 0)
		return (0);
	count = 0;
	while (count < num - 1 && str1[count] == str2[count] && str1[count])
	{
		count++;
	}
	if (!str2[count])
	{
		return (0);
	}
	return (str1[count] - str2[count]);
}

static long long	first_sim(char *src, char goal, size_t n)
{
	size_t	counter;

	counter = 0;
	while (counter < n - 1 && src[counter])
	{
		if (src[counter] == goal)
		{
			return ((long long)(counter) + 1);
		}
		counter++;
	}
	return (-1);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	long long	ind;
	char		*temp_big;
	long long	dumb;

	temp_big = (char *) big;
	if (!little)
		return (temp_big);
	ind = first_sim((char *) & big[0], *(char *) little, len);
	dumb = 0;
	while (ind < (long long)(len - 1) && dumb != -1)
	{
		ind += dumb;
		if (!compair((char *) & big[ind], (char *) little, (len - ind)))
		{
			return (&temp_big[ind]);
		}
		dumb = first_sim(&temp_big[ind + 1], *(char *) little, (size_t)(len - ind));
	}
	return (0);
}
/*
#include <stdio.h>
#include <bsd/string.h>
int	main(void)
{
char	str1[50] = "lax";
char	str2[50] = "la la";

printf("mine: %s\n", ft_strnstr(str1, str2, 15));
printf("original: %s\n", strnstr(str1, str2, 15));
return (0);
}
*/
