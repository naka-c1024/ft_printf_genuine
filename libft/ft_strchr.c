/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynakashi <ynakashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 17:18:00 by ynakashi          #+#    #+#             */
/*   Updated: 2021/09/11 21:27:00 by ynakashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)s + i);
	return (NULL);
}
/*
// NULL->segmentation fault
#include <stdio.h>
int	main(void)
{
	char str[10] = "012345";
	char * adr;

	adr = ft_strchr( str , (int)'3' );
	printf( "345=%s\n" , adr );

	adr = ft_strchr( str , (int)'A' );
	printf( "(null)=%s\n" , adr );

	printf("(null)=%s\n",ft_strchr("", '\n'));
	return (0);
}
*/
