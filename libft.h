/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   libft.h                                           :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/21 00:53:21 by username         #+#    #+#              */
/*   Updated: 2026/09/21 01:55:42 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_isalpha(int value);
int		ft_isdigit(int value);
int		ft_isalnum(int value);
int		ft_isascii(int value);
int		ft_isprint(int value);
size_t	ft_strlen(char *string);
void	*ft_memset(void *start_area_pointer, int filler_byte, size_t number_of_bytes);
void	ft_bzero(void *s, size_t n);

#endif
