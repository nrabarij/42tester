/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrabarij <nrabarij@student.42antanana>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 13:44:29 by nrabarij          #+#    #+#             */
/*   Updated: 2024/03/09 14:04:55 by nrabarij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

static void prt_cnt(void *cnt)
{
	printf("Content is: %s\n", (char *)cnt);
	printf("Pointer is: %p\n", cnt);
	printf("---------\n");
}

int	main(void)
{
	t_list	*l0;
	t_list	*l1;

	l0 = ft_lstnew("Hello");
	if (!l0)
		return (0);
	l1 = ft_lstnew("World");
	if (!l1)
		return (free(l0), 0);
	l0->next = l1;
	ft_lstiter(l0, prt_cnt);
	return (free(l0), free(l1), 0);
}
