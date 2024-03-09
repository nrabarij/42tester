/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrabarij <nrabarij@student.42antanana>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:22:52 by nrabarij          #+#    #+#             */
/*   Updated: 2024/03/07 07:57:36 by nrabarij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(int ac, char **av)
{
	int		i;
	size_t	x;
	char	*dst;

	i = 0;
	dst = NULL;
	if (ac > 1)
	{
		while (av[++i] && av[i + 1])
		{
			dst = (char *)malloc(sizeof(char) * (ft_strlen(av[i]) + 1));
			if (!dst)
				return (0);
			printf("\n---------\nsource: [%s]\n", av[i]);
			printf("dest avant copy: [%s]\n", dst);
			x = ft_strlcpy(dst, av[i], ft_strlen(av[i]));
			printf("dest apres copy: [%s]\n", dst);
			free(dst);
			printf("user return value: %zu\n", x);
			printf("real return value: %zu\n", ft_strlen(av[i]));
			dst = NULL;
		}
	}
	return (0);
}
