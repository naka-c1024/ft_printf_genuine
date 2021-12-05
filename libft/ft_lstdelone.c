/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynakashi <ynakashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 22:38:46 by ynakashi          #+#    #+#             */
/*   Updated: 2021/09/11 12:14:40 by ynakashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*
#include <stdio.h>
void	del(void *tmp)
{
	write(STDOUT_FILENO, "o", 1);
	free(tmp);
	write(STDOUT_FILENO, "k\n", 2);
}

// 変数として覚えていたらleakにはならない?->leaksでは検証不可
// leakdetectを使う
int	main(int argc, char const *argv[])
{
	t_list *a;
	if (argc == 1)
		return 0;
	a = ft_lstnew((void *)ft_strdup(argv[1]));
	printf("%s\n", (char *)a->content);
	ft_lstdelone(a, del);
	// system("leaks a.out");
	return 0;
}
*/
