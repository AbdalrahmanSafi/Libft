/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absafi <absafi@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 03:03:22 by absafi            #+#    #+#             */
/*   Updated: 2026/09/27 03:14:08 by absafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp1;
	t_list	*next;

	temp1 = *lst;
	while (temp1)
	{
		next = temp1->next;
		ft_lstdelone(temp1, del);
		temp1 = next;
	}
	*lst = 0;
}
