/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cspdi_put.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynakashi <ynakashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 14:10:07 by ynakashi          #+#    #+#             */
/*   Updated: 2021/09/24 11:07:54 by ynakashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

int	c_process(va_list ap)
{
	char	c_tmp;

	c_tmp = va_arg(ap, int);
	write(STDOUT_FILENO, &c_tmp, 1);
	return (1);
}

size_t	s_process(va_list ap)
{
	char	*s_tmp;

	s_tmp = va_arg(ap, char *);
	if (s_tmp == 0)
	{
		write(STDOUT_FILENO, "(null)", 6);
		return (6);
	}
	write(STDOUT_FILENO, s_tmp, ft_strlen(s_tmp));
	return (ft_strlen(s_tmp));
}

int	p_zero_process(void)
{
	write(STDOUT_FILENO, "0x0", 3);
	return (3);
}

long long	p_process(va_list ap)
{
	unsigned long long int	p_tmp;
	unsigned long long int	llu_tmp;
	long long				size;

	llu_tmp = 0;
	size = 0;
	p_tmp = va_arg(ap, unsigned long long int);
	if (p_tmp == 0)
		return (p_zero_process());
	write(STDOUT_FILENO, "0x", 2);
	lw_hexadecimal(p_tmp);
	if (p_tmp <= 0)
	{
		llu_tmp = p_tmp * (-1);
		if (p_tmp == 0)
			size++;
	}
	else
		llu_tmp = p_tmp;
	while (llu_tmp > 0)
	{
		llu_tmp = llu_tmp / 16;
		size++;
	}
	return (size + 2);
}

long long	d_i_process(va_list ap)
{
	int				d_i_tmp;
	long long int	ll_tmp;
	long long		size;

	size = 0;
	ll_tmp = 0;
	d_i_tmp = va_arg(ap, int);
	ft_putnbr_fd(d_i_tmp, STDOUT_FILENO);
	if (d_i_tmp <= 0)
	{
		ll_tmp = (long long int)d_i_tmp * (-1);
		size++;
	}
	else
		ll_tmp = d_i_tmp;
	while (ll_tmp > 0)
	{
		ll_tmp = ll_tmp / 10;
		size++;
	}
	return (size);
}
