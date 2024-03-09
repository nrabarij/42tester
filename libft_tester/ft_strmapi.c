/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrabarij <nrabarij@student.42antanana>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 20:16:01 by nrabarij          #+#    #+#             */
/*   Updated: 2024/03/08 20:37:25 by nrabarij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static char	st_rotone(unsigned int i, char c)
{
	if (i % 2 == 0
		&& ((c > 64 && c < 90)
		|| (c > 96 && c < 122)))
		c += 1;
	else if (i % 2 == 0 && (c == 90 || c == 122))
		c -= 25;
	return (c);
}

int	main(int ac, char **av)
{
	int		i;
	char	*test;

	if (ac > 1)
	{
		i = 1;
		while (av[i])
		{
			printf("avant ft_strmapi: %s\n", av[i]);
			test = ft_strmapi(av[i], st_rotone);
			printf("apres ft_strmapi: %s\n", test);
			free(test);
			i++;
		}
	}
	else
		printf("./prog <string_to_map>\n");
	return (0);
}
