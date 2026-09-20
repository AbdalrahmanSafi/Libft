/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_bzero.c                                        :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/21 01:49:48 by username         #+#    #+#              */
/*   Updated: 2026/09/21 02:01:03 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
char	str1[50] = "La la land";
char	str2[50] = "La la land";

ft_bzero(str1, 4);
bzero(str2, 4);
printf("mine: %c\n", str1[4]);
printf("original: %c\n", str2[4]);
return (0);
}
*/
