/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrabarij <nrabarij@student.42antanana>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 20:16:01 by nrabarij          #+#    #+#             */
/*   Updated: 2024/03/08 20:39:23 by nrabarij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static void	st_rotone(unsigned int i, char *s)
{
	if (i % 2 == 0
		&& ((*s > 64 && *s < 90)
		|| (*s > 96 && *s < 122)))
		*s += 1;
	else if (i % 2 == 0 && (*s == 90 || *s == 122))
		*s -= 25;
}

int	main(int ac, char **av)
{
	int		i;

	if (ac > 1)
	{
		i = 1;
		while (av[i])
		{
			printf("avant ft_striteri: %s\n", av[i]);
			ft_striteri(av[i], st_rotone);
			printf("apres ft_striteri: %s\n", av[i]);
			i++;
		}
	}
	else
		printf("./prog <string_to_map>\n");
	return (0);
}
