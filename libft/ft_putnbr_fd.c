/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynakashi <ynakashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 17:59:20 by ynakashi          #+#    #+#             */
/*   Updated: 2021/09/17 22:08:02 by ynakashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	exception_handling(int n, int fd)
{
	char	*ptr;

	if (n == INT_MIN)
	{
		ptr = ft_itoa(INT_MIN);
		ft_putstr_fd(ptr, fd);
		free(ptr);
	}
	else
		ft_putchar_fd('0', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	c[10];

	if (n == 0 || n == INT_MIN)
	{
		exception_handling(n, fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
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
/*
int	main(void)
{
	ft_putnbr_fd(42, STDOUT_FILENO);
	write(STDOUT_FILENO, "\n", 1);
	ft_putnbr_fd(-42, STDOUT_FILENO);
	write(STDOUT_FILENO, "\n", 1);
	ft_putnbr_fd(INT_MAX, STDOUT_FILENO);
	write(STDOUT_FILENO, "\n", 1);
	ft_putnbr_fd(INT_MIN, STDOUT_FILENO);
	write(STDOUT_FILENO, "\n", 1);
	ft_putnbr_fd(0, STDOUT_FILENO);
	write(STDOUT_FILENO, "\n", 1);
	return (0);
}
*/
