/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynakashi <ynakashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 22:12:39 by ynakashi          #+#    #+#             */
/*   Updated: 2021/08/30 10:53:45 by ynakashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	else
		(ft_lstlast(*lst))->next = new;
}
/*
#include <stdio.h>
int	main()
{
	t_list	*a;
	t_list	*b;
	t_list	*c;
	t_list	*lst;

	a = ft_lstnew("first");
	b = ft_lstnew("second");
	c = ft_lstnew("third");
	lst = a;

	ft_lstadd_back(&a, b);
	ft_lstadd_back(&a, c);
	while (lst != NULL)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}
	return (0);
}
*/
