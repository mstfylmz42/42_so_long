/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustyilm <mustyilm@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 18:00:11 by mustyilm          #+#    #+#             */
/*   Updated: 2024/02/16 18:00:12 by mustyilm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(char x);
int	ft_format(va_list *args, char w);
int	ft_int(int w);
int	ft_unsigned(unsigned int w);
int	ft_string(char *str);
int	ft_hex(unsigned int d, char w);
int	ft_point(unsigned long w, int i);
int	ft_check(char str);

#endif