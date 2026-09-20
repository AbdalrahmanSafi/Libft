/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_isalnum.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/20 21:32:51 by username         #+#    #+#              */
/*   Updated: 2026/09/21 01:54:32 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int value)
{
	if (ft_isalpha(value) || ft_isdigit(value))
	{
		return (1);
	}
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
printf("Mine:\n5 %d\n", ft_isalnum('5'));
printf("A %d\n", ft_isalnum('A'));
printf("1950 %d\n", ft_isalnum(1950));
printf("-5 %d\n", ft_isalnum(-5));
printf("Original:\n5 %d\n", isalnum('5'));
printf("A %d\n", isalnum('A'));
printf("1950 %d\n", isalnum(1950));
printf("-5 %d\n", isalnum(-5));
return (0);
}
*/
