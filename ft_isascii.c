/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absafi <absafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 21:52:31 by username          #+#    #+#             */
/*   Updated: 2026/09/21 10:21:36 by absafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int value)
{
	if (value >= 0 && value <= 127)
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
printf("mine:\n0 %d\n", ft_isascii(0));
printf("127 %d\n", ft_isascii(127));
printf("50 %d\n", ft_isascii(50));
printf("128 %d\n", ft_isascii(128));
printf("-1 %d\n", ft_isascii(-1));
printf("original:\n0 %d\n", isascii(0));
printf("127 %d\n", isascii(127));
printf("50 %d\n", isascii(50));
printf("128 %d\n", isascii(128));
printf("-1 %d\n", isascii(-1));
}
*/
