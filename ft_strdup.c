/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absafi <absafi@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 22:10:13 by absafi            #+#    #+#             */
/*   Updated: 2026/10/03 22:40:05 by absafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*buffer;

	size = ft_strlen(s);
	buffer = (char *) malloc(size + 1);
	if (!buffer)
		return (0);
	ft_strlcpy(buffer, s, size + 1);
	return (buffer);
}
