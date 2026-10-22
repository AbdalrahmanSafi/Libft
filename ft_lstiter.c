/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absafi <absafi@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 03:17:14 by absafi            #+#    #+#             */
/*   Updated: 2026/10/21 17:49:20 by absafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*
#include <stdio.h>

void	f(void *ptr)
{
char	*temp;

temp = (char *) ptr;
(*temp)++;
}

void	del(void *value)
{
free(value);
}
int	main(void)
{
t_list	*lst;
t_list	*current;
int		counter;
char	*value1;
char	*value2;

lst = NULL;
value1 = ft_strdup("0");
ft_lstadd_back(&lst, ft_lstnew(value1));
value2 = ft_strdup("1");
ft_lstadd_back(&lst, ft_lstnew(value2));
counter = 0;
current = lst;
while (current)
{
printf("%d) %s\n", counter + 1, (char *)(current->content));
current = current->next;
counter++;
}
ft_lstiter(lst, f);
current = lst;
while (current)
{
printf("%d) %s\n", counter + 1, (char *)(current->content));
current = current->next;
counter++;
}
ft_lstiter(lst, f);
current = lst;
while (current)
{
printf("%d) %s\n", counter + 1, (char *)(current->content));
current = current->next;
counter++;
}
ft_lstclear(&lst, del);
return (0);
}
*/
