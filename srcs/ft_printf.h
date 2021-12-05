/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynakashi <ynakashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 11:51:09 by ynakashi          #+#    #+#             */
/*   Updated: 2021/09/24 13:22:52 by ynakashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h> //malloc,free
# include <unistd.h> //write
# include <stdarg.h> //va
# include <limits.h> // macro

int			ft_printf(const char *fmt, ...);
// utils.c
void		pf_putlnbr_fd(unsigned int n, int fd);
void		lw_hexadecimal(unsigned long long int num);
void		up_hexadecimal(unsigned long long int num);
// cspdi_put.c
int			c_process(va_list ap);
int			p_zero_process(void);
long long	p_process(va_list ap);
size_t		s_process(va_list ap);
long long	d_i_process(va_list ap);
// uxlxper_put.c
long long	u_process(va_list ap);
long long	x_process(va_list ap);
long long	lx_process(va_list ap);
int			per_process(void);

#endif