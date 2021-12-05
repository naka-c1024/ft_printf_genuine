/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynakashi <ynakashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 15:47:22 by ynakashi          #+#    #+#             */
/*   Updated: 2021/08/26 09:08:52 by ynakashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (32 <= c && c <= 126);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n",ft_isprint('!'));
	printf("%d\n",ft_isprint(127));
	return (0);
}
*/
