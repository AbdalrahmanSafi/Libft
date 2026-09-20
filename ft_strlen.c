/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlen.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/20 22:31:23 by username         #+#    #+#              */
/*   Updated: 2026/09/21 01:29:16 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(char *string)
{
	size_t	counter;

	counter = 0;
	while (string[counter])
	{
		counter++;
	}
	return (counter);
}

/*
#include <stdio.h>
#include <string.h>
*/

int	main(void)
{
	printf("mine:\n\"\" %lu\n", ft_strlen(""));
	printf("32 %lu\n", ft_strlen("32"));
	printf("Abdel Rahman %lu\n", ft_strlen("Abdel Rahman"));
	printf("op %lu\n", ft_strlen("op"));
	printf("p\\0x %lu\n", ft_strlen("p\0x"));
	printf("- 1 %lu\n", ft_strlen("- 1"));
	printf("original:\"\"\n %lu\n", strlen(""));
	printf("32 %lu\n", strlen("32"));
	printf("Abdel Rahman %lu\n", strlen("Abdel Rahman"));
	printf("op %lu\n", strlen("op"));
	printf("p\\0x %lu\n", strlen("p\0x"));
	printf("- 1 %lu\n", strlen("- 1"));
	return (0);
}
