/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrabarij <nrabarij@student.42antanana>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 20:44:55 by nrabarij          #+#    #+#             */
/*   Updated: 2024/03/08 21:00:50 by nrabarij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "../libft.h"

int	main(int ac, char **av)
{
	t_list	*new;

	if (ac == 2)
	{
		new = ft_lstnew(av[1]);
		printf("new.content\t: %s\n", (unsigned char *)new->content);
		printf("new.next\t: %p\n", new->next);
		free(new);
	}
	else
		printf("./prog <new_content>\n");
	return (0);
}
