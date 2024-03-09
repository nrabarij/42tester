/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrabarij <nrabarij@student.42antanana>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 13:09:20 by nrabarij          #+#    #+#             */
/*   Updated: 2024/03/08 13:21:43 by nrabarij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	size_t	i;
	size_t	x;

	if (ac == 4)
	{
		x = strlen(av[1]);
		printf("avant memcpy: %s\n", av[1]);
		ft_memcpy(av[1], av[2], atoll(av[3]));
		printf("apres memcpy: ");
		i = 0;
		while (i < x)
		{
			if (av[1][i] < 32 || av[1][i] > 126)
				printf(".");
			else
				printf("%c", av[1][i]);
			i++;
		}
		printf("\n");
	}
	else
		printf("./prog <dst> <src> <size_t>\n");
	return (0);
}
