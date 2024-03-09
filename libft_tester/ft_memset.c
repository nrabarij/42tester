/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrabarij <nrabarij@student.42antanana>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:54:07 by nrabarij          #+#    #+#             */
/*   Updated: 2024/03/08 13:18:20 by nrabarij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int ac, char **av)
{
	size_t	i;
	size_t	x;

	if (ac == 4)
	{
		x = strlen(av[1]);
		printf("avant memset: %s\n", av[1]);
		ft_memset(av[1], av[2][0], atoll(av[3]));
		printf("apres memset: ");
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
		printf("./prog <string> <int_c> <size_t>\n");
}
