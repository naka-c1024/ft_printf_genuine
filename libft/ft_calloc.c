/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynakashi <ynakashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 17:31:56 by ynakashi          #+#    #+#             */
/*   Updated: 2021/08/29 20:29:25 by ynakashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*tmp;

	if (!count || !size)
	{
		count = 1;
		size = 1;
	}
	errno = 0;
	if (count > SIZE_MAX / size)
	{
		errno = ENOMEM;
		return (NULL);
	}
	tmp = malloc(count * size);
	if (tmp == NULL)
		return (NULL);
	ft_bzero(tmp, (count * size));
	return (tmp);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	printf("%s\n",ft_calloc(2, SIZE_MAX));
	printf("%s\n",strerror(errno));

	printf("%s : %s\n",(char *)ft_calloc(42, 2), (char *)calloc(42, 2));
	printf("%s : %s\n",(char *)ft_calloc(2, SIZE_MAX), (char *)calloc(2, SIZE_MAX));
	printf("%s : %s\n",(char *)ft_calloc(SIZE_MAX, 2),(char *)calloc(SIZE_MAX, 2));
	printf("%s : %s\n",(char *)ft_calloc(0, 0), (char *)calloc(0, 0));
	printf("%s : %s\n",(char *)ft_calloc(0, 1), (char *)calloc(0, 1));
	printf("%s : %s\n",(char *)ft_calloc(1, 0), (char *)calloc(1, 0));
	return (0);
}
*/
