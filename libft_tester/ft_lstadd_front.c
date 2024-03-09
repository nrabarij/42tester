/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrabarij <nrabarij@student.42antanana>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 20:44:55 by nrabarij          #+#    #+#             */
/*   Updated: 2024/03/08 23:34:57 by nrabarij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "../libft.h"

void	d(void *cnt)
{
	cnt = '\0';
	return ;
}

int	main(int ac, char **av)
{
	t_list	*new;
	t_list	*front;

	if (ac == 3)
	{
		new = ft_lstnew(av[1]);
		if (!new)
			return (0);
		front = ft_lstnew(av[2]);
		if (!front)
			return (free(new), 0);
		ft_lstadd_front(&new, front);
		printf("lst.content\t: %s\n", (unsigned char *)front->content);
		printf("lst.next\t: %p\n", front->next);
		printf("lst.content\t: %s\n", (unsigned char *)front->next->content);
		printf("lst.next\t: %p\n", front->next->next);
		ft_lstclear(&front, d);
	}
	else
		printf("./prog <new_content>\n");
	return (0);
}
