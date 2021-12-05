/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynakashi <ynakashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 17:52:38 by ynakashi          #+#    #+#             */
/*   Updated: 2021/08/28 19:36:53 by ynakashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	dst = malloc(((s1_len + s2_len + 1) * sizeof(char)));
	if (!dst)
		return (NULL);
	ft_memmove(dst, s1, s1_len);
	ft_memmove(dst + s1_len, s2, s2_len);
	dst[s1_len + s2_len] = '\0';
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char *s = ft_strjoin("where is my ", "malloc ???");
	printf("%d\n",strcmp(s, "where is my malloc ???"));
	s = ft_strjoin("", "42");
	printf("%d\n",strcmp(s, "42"));
	s = ft_strjoin("42", "");
	printf("%d\n",strcmp(s, "42"));
	s = ft_strjoin("", "");
	printf("%d\n",strcmp(s, ""));
	return 0;
}
*/
