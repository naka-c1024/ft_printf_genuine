/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynakashi <ynakashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 20:44:58 by ynakashi          #+#    #+#             */
/*   Updated: 2021/08/26 09:18:58 by ynakashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*str;

	if (!n)
		return (NULL);
	str = (const char *)s;
	i = 0;
	while (n-- > 0)
	{
		if (str[i] == (char)c)
			return ((void *)str + i);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	printf("%s\n",(char *)ft_memchr("abc\0def", '\0', 2));
	printf("%s\n",(char *)memchr("abc\0def", '\0', 2));
	return (0);
}
*/
