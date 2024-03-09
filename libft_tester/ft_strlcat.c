/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrabarij <nrabarij@student.42antanana>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:22:52 by nrabarij          #+#    #+#             */
/*   Updated: 2024/03/08 14:24:40 by nrabarij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(int ac, char **av)
{
	int		i;
	size_t	x;
	size_t	a;
	size_t	z;
	char	*dst;

	i = 1;
	dst = NULL;
	if (ac > 1 && (ac % 2))
	{
		while (av[i] && av[i + 1])
		{
			dst = av[i];
			a = ft_strlen(av[i]);
			z = ft_strlen(av[i + 1]);
			printf("\n---------\nsource: [%s]\n", av[i + 1]);
			printf("dest avant cat: [%s]\n", dst);
			x = ft_strlcat(dst, av[i + 1], a + 3);
			printf("dest apres cat: [%s]\n", dst);
			printf("user return value: %zu\n", x);
			printf("real return value: %zu\n", a + z);
			dst = NULL;
			++i;
		}
	}
	return (0);
}
