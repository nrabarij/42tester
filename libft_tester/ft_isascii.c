/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrabarij <nrabarij@student.42antanana>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:22:52 by nrabarij          #+#    #+#             */
/*   Updated: 2024/03/06 20:05:04 by nrabarij         ###   ########.fr       */
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
			printf("[%c]", ft_atoi(av[i]));
			printf(" is ascii: [%d]\n", ft_isascii(ft_atoi(av[i])));
		}
	}
	else
		printf("./prog <arg>\n");
	return (0);
}
