/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uxlxper_put.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynakashi <ynakashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 14:10:16 by ynakashi          #+#    #+#             */
/*   Updated: 2021/09/24 11:09:41 by ynakashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

long long	u_process(va_list ap)
{
	unsigned int	u_tmp;
	long long		size;
	long long int	ll_tmp;

	size = 0;
	ll_tmp = 0;
	u_tmp = va_arg(ap, unsigned int);
	pf_putlnbr_fd(u_tmp, STDOUT_FILENO);
	if (u_tmp <= 0)
	{
		ll_tmp = (long long int)u_tmp * (-1);
		size++;
	}
	else
		ll_tmp = u_tmp;
	while (ll_tmp > 0)
	{
		ll_tmp = ll_tmp / 10;
		size++;
	}
	return (size);
}

long long	x_process(va_list ap)
{
	unsigned int	x_tmp;
	long long int	ll_tmp;
	long long		size;

	ll_tmp = 0;
	size = 0;
	x_tmp = va_arg(ap, unsigned int);
	lw_hexadecimal(x_tmp);
	if (x_tmp <= 0)
	{
		ll_tmp = (long long int)x_tmp * (-1);
		if (x_tmp == 0)
			size++;
	}
	else
		ll_tmp = x_tmp;
	while (ll_tmp > 0)
	{
		ll_tmp = ll_tmp / 16;
		size++;
	}
	return (size);
}

long long	lx_process(va_list ap)
{
	unsigned int	lx_tmp;
	long long int	ll_tmp;
	long long		size;

	ll_tmp = 0;
	size = 0;
	lx_tmp = va_arg(ap, unsigned int);
	up_hexadecimal(lx_tmp);
	if (lx_tmp <= 0)
	{
		ll_tmp = (long long int)lx_tmp * (-1);
		if (lx_tmp == 0)
			size++;
	}
	else
		ll_tmp = lx_tmp;
	while (ll_tmp > 0)
	{
		ll_tmp = ll_tmp / 16;
		size++;
	}
	return (size);
}

int	per_process(void)
{
	write(STDOUT_FILENO, "%", 1);
	return (1);
}
