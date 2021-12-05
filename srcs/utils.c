/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynakashi <ynakashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 23:45:37 by ynakashi          #+#    #+#             */
/*   Updated: 2021/09/17 16:41:15 by ynakashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

void	pf_putlnbr_fd(unsigned int n, int fd)
{
	int		i;
	char	c[10];

	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	i = 0;
	while (n > 0)
	{
		c[i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	i--;
	while (i >= 0)
		ft_putchar_fd(c[i--], fd);
}

void	lw_hexadecimal(unsigned long long int num)
{
	int		i;
	int		j;
	char	*convert;
	char	answer[42];

	i = 0;
	j = 0;
	convert = "0123456789abcdef";
	if (num == 0)
	{
		write(STDOUT_FILENO, "0", 1);
		return ;
	}
	while (num > 0)
	{
		j = num % 16;
		num = num / 16;
		answer[i] = convert[j];
		i++;
	}
	while (--i >= 0)
		write(STDOUT_FILENO, &answer[i], sizeof(answer[i]));
	return ;
}

void	up_hexadecimal(unsigned long long int num)
{
	int		i;
	int		j;
	char	*convert;
	char	answer[42];

	i = 0;
	j = 0;
	convert = "0123456789ABCDEF";
	if (num == 0)
	{
		write(STDOUT_FILENO, "0", 1);
		return ;
	}
	while (num > 0)
	{
		j = num % 16;
		num = num / 16;
		answer[i] = convert[j];
		i++;
	}
	while (--i >= 0)
		write(STDOUT_FILENO, &answer[i], sizeof(answer[i]));
	return ;
}
