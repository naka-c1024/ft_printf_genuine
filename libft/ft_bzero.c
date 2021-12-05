/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynakashi <ynakashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 11:32:31 by ynakashi          #+#    #+#             */
/*   Updated: 2021/08/28 16:29:16 by ynakashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n-- > 0)
		*p++ = '\0';
}
/*
**#include <stdio.h>
**int	main(void)
**{
**	int i = -1;
**	char str[5] = "11111";
**	ft_bzero(str+1, 2);
**	while (++i < 5)
**		printf("%c, ", str[i]);
**	return (0);
**}
*/
