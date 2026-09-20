/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memset.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/21 01:22:51 by username         #+#    #+#              */
/*   Updated: 2026/09/21 01:42:51 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *start_area_pointer, int filler_byte, size_t number_of_bytes)
{
	unsigned char	*char_area_pointer = start_area_pointer;

	while (start_area_pointer && number_of_bytes > 0)
	{
		*char_area_pointer = filler_byte;
		number_of_bytes--;
		char_area_pointer++;
	}
	return (start_area_pointer);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
char	str1[50] = "La la land";
char	str2[50] = "La la land";

printf("mine: %s\n", (char *) ft_memset(str1, -2, 4));
printf("original: %s\n", (char *) memset(str2, -2, 4));
return (0);
}
*/
