/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynakashi <ynakashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 18:05:35 by ynakashi          #+#    #+#             */
/*   Updated: 2021/08/28 17:59:03 by ynakashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	if (c)
	{
		while (i--)
			if (s[i] == (char)c)
				return ((char *)&s[i]);
		return (NULL);
	}
	return ((char *)&s[i]);
}
/*
#include <libc.h>
int	main(void)
{
	// int -> segmentation fault
	char *s = calloc((size_t)INT_MAX + 200, sizeof(char));
	ft_memset(s, 'a', (size_t)INT_MAX + 199);
	printf("(null) = %s\n", ft_strrchr(s, 'A'));

	printf("%s = %s\n", strrchr(s, 'A'), ft_strrchr(s, 'A'));
	printf("%s = %s\n", strrchr("tripouille", 'i'), ft_strrchr("tripouille", 'i'));
	printf("%s = %s\n", strrchr("tripouille", 'A'), ft_strrchr("tripouille", 'A'));
	printf("%s = %s\n",
		strrchr("tripouille", 't' + 256), ft_strrchr("tripouille", 't' + 256));
	printf("%s = %s\n",
		strrchr("tripouille", 't' + 512), ft_strrchr("tripouille", 't' + 1024));
	return (0);
}
*/
