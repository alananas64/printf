/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosman <nosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:52:13 by nosman            #+#    #+#             */
/*   Updated: 2023/12/16 15:24:18 by nosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <limits.h>
# include <stdio.h>

int		ft_printf(const	char *conversions, ...);
int		ft_putchar(int c);
int		ft_putstring(char *str);
int		ft_putnbr(int nb);
int		ft_putunsignedint(unsigned int nb);
int		ft_puthexalower(unsigned long long nb);
int		ft_puthexaupper(unsigned long long nb);
int		ft_putpointer(void *p);
#endif
