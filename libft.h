/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absafi <absafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 00:53:21 by username          #+#    #+#             */
/*   Updated: 2026/09/21 16:28:39 by absafi           ###   ########.fr       */
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
void	*ft_memset(void *start, int byte, size_t num);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t num);
void	*memmove(void *dest, const void *src, size_t n);
size_t	strlcpy(char *dst, const char *src, size_t size);
#endif
