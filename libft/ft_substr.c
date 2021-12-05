/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynakashi <ynakashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 17:51:49 by ynakashi          #+#    #+#             */
/*   Updated: 2021/08/28 16:23:59 by ynakashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	new_str_len;

	if (s == NULL)
		return (NULL);
	if ((unsigned int)ft_strlen(s) <= start || len == 0)
		return (ft_strdup(""));
	new_str_len = ft_strlen(s + start);
	if (new_str_len < len)
		len = new_str_len;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, s + start, len + 1);
	return (result);
}
/*
#include <stdio.h>
int main(void)
{
	char* str1;
	str1 = ft_substr("Hello, 42world!", 7, 2);
	printf("42 = %s\n", str1);
	char* str2;
	str2 = ft_substr("Hello, 42world!", 20, 2);
	printf(""" = %s\n", str2);
	char* str3;
	str3 = ft_substr("Hello, 42world!", 7, 0);
	printf(""" = %s\n", str3);
	char* str4;
	str4 = ft_substr("Hello, 42world!", 7, 20);
	printf("42world! = %s\n", str4);
	return 0;
}
*/
