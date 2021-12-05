/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynakashi <ynakashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 12:14:44 by ynakashi          #+#    #+#             */
/*   Updated: 2021/08/27 21:43:04 by ynakashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = (char *)dest;
	s = (const char *)src;
	if (d > s)
	{
		s = s + n - 1;
		d = d + n - 1;
		while (n-- > 0)
			*d-- = *s--;
	}
	else if (d < s)
	{
		while (n-- > 0)
			*d++ = *s++;
	}
	return ((void *)dest);
}
/*
#include <stdio.h>
#include <string.h>
//not NULL guard
int	main(void)
{
	// char	b[0xF0];
	// ft_memmove(NULL, b, 5);
	// memmove(NULL, b, 5);

	// char	c[0xF0];
	// ft_memmove(c, NULL, 5);
	// memmove(c, NULL, 5);

		char str1[] = "xxxxxxx";
	int i;

	printf("before:");
	i = 0;
	while (i < 7)
	{
		printf("%d ",str1[i]);
		i++;
	}
	printf("\n");

	ft_memmove(str1, "aa\0aaa", 6);

	printf("after:");
	i = 0;
	while (i < 7)
	{
		printf("%d ",str1[i]);
		i++;
	}
	printf("\n");
	return (0);
}
*/
