/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrabarij <nrabarij@student.42antanana>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 20:44:55 by nrabarij          #+#    #+#             */
/*   Updated: 2024/03/08 21:32:19 by nrabarij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "../libft.h"

int	main(int ac, char **av)
{
	t_list	*new;
	t_list	*back;
	t_list	*first;

	if (ac == 3)
	{
		new = ft_lstnew(av[1]);
		if (!new)
			return (0);
		first = new;
		back = ft_lstnew(av[2]);
		if (!back)
			return (free(new), 0);
		ft_lstadd_back(&new, back);
		while (new)
		{
			printf("lst.content\t: %s\n", (unsigned char *)new->content);
			printf("lst.next\t: %p\n", new->next);
			new = new->next;
		}
		return (free(back), free(first), 0);
	}
	else
		printf("./prog <new_content>\n");
	return (0);
}
