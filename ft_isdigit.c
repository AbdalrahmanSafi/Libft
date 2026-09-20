/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_isdigit.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/20 21:28:35 by username         #+#    #+#              */
/*   Updated: 2026/09/20 21:28:35 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int value)
{
	if (value >= '0' && value <= '9')
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
printf("Mine:\n5 %d\n", ft_isdigit('5'));
printf("A %d\n", ft_isdigit('A'));
printf("1950 %d\n", ft_isdigit(1950));
printf("-5 %d\n", ft_isdigit(-5));
printf("Original:\n5 %d\n", ft_isdigit('5'));
printf("A %d\n", ft_isdigit('A'));
printf("1950 %d\n", ft_isdigit(1950));
printf("-5 %d\n", ft_isdigit(-5));
return (0);
}
*/
