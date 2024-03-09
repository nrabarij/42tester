/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrabarij <nrabarij@student.42antanana>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:54:07 by nrabarij          #+#    #+#             */
/*   Updated: 2024/03/08 12:04:00 by nrabarij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int ac, char **av)
{
	size_t	i;
	size_t	x;

	if (ac == 3)
	{
		x = strlen(av[1]);
		printf("avant bzero: %s\n", av[1]);
		ft_bzero(av[1], atoll(av[2]));
		printf("apres bzero: ");
		i = 0;
		while (i < x)
		{
			if (av[1][i] == '\0')
				printf(".");
			else
				printf("%c", av[1][i]);
			i++;
		}
		printf("\n");
	}
	else
		printf("./prog <string> <size_t>\n");
}
