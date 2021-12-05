/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynakashi <ynakashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 22:01:26 by ynakashi          #+#    #+#             */
/*   Updated: 2021/08/30 11:22:00 by ynakashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
/*
#include <stdio.h>
int	main()
{
	t_list	*a;
	t_list	*b;
	t_list	*c;

	a = ft_lstnew("first");
	b = ft_lstnew("second");
	c = ft_lstnew("third");

	ft_lstadd_back(&a, b);
	ft_lstadd_back(&a, c);
	printf("%p = %p\n", c, ft_lstlast(a));
	return (0);
}
*/
