/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynakashi <ynakashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 14:31:07 by ynakashi          #+#    #+#             */
/*   Updated: 2021/08/25 22:50:51 by ynakashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (0 <= c && c <= 127);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n",ft_isascii(' '));
	printf("%d\n",ft_isascii(129));
	return (0);
}
*/
