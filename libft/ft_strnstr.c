/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynakashi <ynakashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 12:57:01 by ynakashi          #+#    #+#             */
/*   Updated: 2021/08/28 13:28:35 by ynakashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[j] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && haystack[i + j] && i + j < len)
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}
/*
//needle == NULL -> crash
#include <stdio.h>
#include <string.h>
int main(void)
{
	char s1[30] = "pen pineapple apple pen!";

	char* ptr = ft_strnstr(s1, "pine", 10);
	printf("pineapple apple pen! = %s\n", ptr);
	char* ptr1 = ft_strnstr(s1, "pine", 5);
	printf("(null) = %s\n", ptr1);
	printf("pen pineapple apple pen! = %s\n", ft_strnstr(s1, "\0pine", 10));
	printf("%s\n", ft_strnstr(s1, NULL, 10));
	return (0);
}
*/
