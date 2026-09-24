/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absafi <absafi@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:04:05 by absafi            #+#    #+#             */
/*   Updated: 2026/09/24 16:35:53 by absafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	is_in_set(const char *set, char current_char)
{
	size_t	counter;

	counter = 0;
	while (set[counter])
	{
		if (set[counter] == current_char)
		{
			return (1);
		}
		counter++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	src_count;
	size_t	start;
	char	*buffer;

	src_count = 0;
	if (!s1 || !set)
	{
		return ((char *) s1);
	}
	while (s1[src_count] && is_in_set(set, s1[src_count]))
		src_count++;
	start = src_count;
	src_count = ft_strlen(s1);
	while (start != src_count && is_in_set(set, s1[src_count]))
	{
		src_count--;
	}
	buffer = malloc(src_count - start + 1);
	if (!buffer)
		return (0);
	ft_strlcpy(buffer, &s1[start], src_count - start + 1);
	return (buffer);
}

int	main(void)
{
	char	*buffer;

	buffer = ft_strtrim("ann an lao ann", "ann");
	printf("%s", buffer);
	free(buffer);
	return (0);
}
