/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynakashi <ynakashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 15:27:34 by ynakashi          #+#    #+#             */
/*   Updated: 2021/09/11 12:02:23 by ynakashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!lst || !*lst || !del)
		return ;
	while (*lst)
	{
		del((*lst)->content);
		tmp = *lst;
		*lst = tmp->next;
		free(tmp);
	}
	*lst = NULL;
}
/*
// leakdetectを使う
#include <stdio.h>

void	del(void *tmp)
{
	write(STDOUT_FILENO, "o", 1);
	free(tmp);
	write(STDOUT_FILENO, "k\n", 2);
}

t_list	*create_content(char *str)
{
	t_list *tmp;

	tmp = malloc(sizeof(*tmp));
	tmp->content = str;
	tmp->next = NULL;
	return tmp;
}

int main(int argc, char const *argv[])
{
	t_list *a;
	t_list *b;

	if (argc == 1)
		return 0;
	a = ft_lstnew(create_content(ft_strdup(argv[1])));
	b = ft_lstnew(create_content(ft_strdup(argv[2])));
	ft_lstadd_back(&a, b);
	ft_lstclear(&a, del);
	return 0;
}
*/
