/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrabarij <nrabarij@student.42antanana>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:22:52 by nrabarij          #+#    #+#             */
/*   Updated: 2024/03/06 19:55:08 by nrabarij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac > 1)
	{
		while (av[++i])
		{
			printf("[%s]", av[i]);
			printf(" length is: [%zu] character(s)\n", ft_strlen(av[i]));
		}
	}
	else
		printf("./prog <string>\n");
	return (0);
}
