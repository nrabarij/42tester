/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrabarij <nrabarij@student.42antanana>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:22:52 by nrabarij          #+#    #+#             */
/*   Updated: 2024/03/06 21:18:06 by nrabarij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		printf("avant conversion: %s\n", av[1]);
		while (av[1][i] != '\0')
		{
			av[1][i] = ft_tolower(av[1][i]);
			i++;
		}
		printf("apres conversion: %s\n", av[1]);
	}
	else
		printf("./prog <string_to_convert>\n");
	return (0);
}
