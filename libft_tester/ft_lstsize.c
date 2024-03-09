/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrabarij <nrabarij@student.42antanana>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 11:09:12 by nrabarij          #+#    #+#             */
/*   Updated: 2024/03/09 11:17:40 by nrabarij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	t_list	*l0;
	t_list	*l1;
	t_list	*l2;
	t_list	*l3;

	l0 = ft_lstnew("elem_0");
	if (!l0)
		return (0);
	l1 = ft_lstnew("elem_1");
	if (!l1)
		return (free(l0), 0);
	l2 = ft_lstnew("elem_2");
	if (!l2)
		return (free(l0), free(l1), 0);
	l3 = ft_lstnew("elem_3");
	if (!l3)
		return (free(l0), free(l1), free(l2), 0);
	l0->next = l1;
	l1->next = l2;
	l2->next = l3;
	printf("[%d]\n", ft_lstsize(l0));
	return (free(l0), free(l1), free(l2), free(l3), 0);
}
