/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrabarij <nrabarij@student.42antanana>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 11:09:12 by nrabarij          #+#    #+#             */
/*   Updated: 2024/03/09 13:21:06 by nrabarij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

void	del(void *cnt)
{
	cnt = 0;
}

int	main(void)
{
	t_list	*l0;
	t_list	*l1;
	t_list	*l2;

	l0 = ft_lstnew("elem_0");
	if (!l0)
		return (0);
	l1 = ft_lstnew("elem_1");
	if (!l1)
		return (free(l0), 0);
	l2 = ft_lstnew("elem_2");
	if (!l2)
		return (free(l0), free(l1), 0);
	l0->next = l1;
	l1->next = l2;
	printf("ptr 0 nxt\t:%p\nptr 1\t\t:%p\n", (void *)l0->next, (void *)l1);
	printf("ptr 1 cnt\t:%p\n", (void *)l1->content);
	printf("ptr 1 nxt\t:%p\n", (void *)l1->next);
	printf("ptr 2\t\t:%p\n", (void *)l2);
	ft_lstdelone(l1, del);
	printf("ptr 0 nxt\t:%p\nptr 1\t\t:%p\n", (void *)l0->next, (void *)l1);
	printf("ptr 1 cnt\t:%p\n", (void *)l1->content);
	printf("ptr 1 nxt\t:%p\n", (void *)l1->next);
	printf("ptr 2\t\t:%p\n", (void *)l2);
	return (free(l0), free(l2), 0);
}
