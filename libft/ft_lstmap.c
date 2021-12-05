/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynakashi <ynakashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 15:56:01 by ynakashi          #+#    #+#             */
/*   Updated: 2021/09/01 07:17:02 by ynakashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*new_list;

	if (!lst || !f)
		return (NULL);
	result = NULL;
	while (lst)
	{
		new_list = ft_lstnew((*f)(lst->content));
		if (!new_list)
		{
			ft_lstclear(&result, del);
			return (NULL);
		}
		ft_lstadd_back(&result, new_list);
		lst = lst->next;
	}
	return (result);
}
/*
//del : not NULL guard
#include <stdio.h>

void		*cpy_content(void *tmp)
{
	t_list *k;
	char *l;

	k = (t_list *)tmp;
	l = ft_strdup(k->content);
	return ((void *)l);
}

t_list	*create_content(char *str)
{
	t_list *tmp;

	tmp = malloc(sizeof(*tmp));
	tmp->content = str;
	tmp->next = NULL;
	return tmp;
}

void	free_lst(void *tmp)
{
	t_list *a;

	a = (t_list *)tmp;
	free(a->content);
	write(STDOUT_FILENO, "o", 1);
	free(a);
	write(STDOUT_FILENO, "k\n", 2);
}

int		main(int argc, char **argv)
{
	t_list *tmp;
	t_list *tmp2;
	t_list *a;
	t_list	*cpy_tmp;

	if (argc == 1)
		return (0);
	tmp = ft_lstnew(create_content(ft_strdup(argv[1])));
	tmp2 = ft_lstnew(create_content(ft_strdup(argv[2])));
	ft_lstadd_back(&tmp, tmp2);
	a = (t_list *)tmp->content;
	printf("content:%s\n", (char *)a->content);
	a = (t_list *)tmp2->content;
	printf("content:%s\n", (char *)a->content);

	cpy_tmp = ft_lstmap(tmp, cpy_content,free_lst);
	printf("cpy_content:%s\n", (char *)cpy_tmp->content);
	printf("cpy_content:%s\n", (char *)cpy_tmp->next->content);
	system("leaks a.out");
	return (0);
}
*/
