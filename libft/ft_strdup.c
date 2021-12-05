/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynakashi <ynakashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 17:32:46 by ynakashi          #+#    #+#             */
/*   Updated: 2021/08/27 22:03:55 by ynakashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	s1_len;

	s1_len = ft_strlen(s1);
	ptr = (char *)malloc(s1_len + sizeof(char));
	if (!ptr)
		return (NULL);
	else
		ft_strlcpy(ptr, s1, s1_len + 1);
	return (ptr);
}
/*
#include <stdio.h>
#include <string.h>
//not NULL guard
int main (void)
{
	// ft_strdup(NULL);
	// strdup(NULL);

	char *p;
	char *q;
	char str[] = "abcd\0e";

	p = ft_strdup(str);
	q = strdup(str);
	str[0] = 'z';

	printf("%s\n",str);
	printf("%s = %s\n", p, q);
}
*/
