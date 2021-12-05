/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynakashi <ynakashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 11:49:27 by ynakashi          #+#    #+#             */
/*   Updated: 2021/09/24 13:42:15 by ynakashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

long long	transformation_specifier(va_list ap, char c)
{
	if (c == 'c')
		return (c_process(ap));
	else if (c == 's')
		return (s_process(ap));
	else if (c == 'p')
		return (p_process(ap));
	else if (c == 'd' || c == 'i')
		return (d_i_process(ap));
	else if (c == 'u')
		return (u_process(ap));
	else if (c == 'x')
		return (x_process(ap));
	else if (c == 'X')
		return (lx_process(ap));
	else if (c == '%')
		return (per_process());
	else
	{
		write(STDOUT_FILENO, &c, sizeof(c));
		return (1);
	}
}

int	ft_printf(const char *fmt, ...)
{
	size_t		i;
	long long	n;
	va_list		ap;

	i = 0;
	n = 0;
	va_start(ap, fmt);
	while (fmt[i])
	{
		if (fmt[i] == '%')
			n = n + (long long)transformation_specifier(ap, fmt[++i]);
		else
		{
			write(STDOUT_FILENO, &fmt[i], sizeof(fmt[i]));
			n++;
		}
		if (n >= INT_MAX)
			return (-1);
		i++;
	}
	va_end(ap);
	return (n);
}
// error process -> str_len >= INT_MAX
// char	*str;
// str = (char *)malloc((size_t)INT_MAX + 2);
// ft_memset(str, 'a', (size_t)INT_MAX + 1);
// str[(size_t)INT_MAX + 1] = '\0';
// printf("[number]%d\n", printf("%s\n%s\n", str, str));
// ft_printf("[number]%d\n", ft_printf("%s\n%s\n", str, str));
// ./a.out | grep number > output.txt

// "abc%yde" -> guacamole,abcyde
