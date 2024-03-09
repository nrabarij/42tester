/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrabarij <nrabarij@student.42antanana>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 14:16:06 by nrabarij          #+#    #+#             */
/*   Updated: 2024/03/08 15:00:19 by nrabarij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);

int	main(int ac, char **av)
{
	char	*res;

	res = NULL;
	if (ac == 4)
	{
		res = ft_substr(av[1], atoi(av[2]), atoll(av[3]));
		printf("%s\n", res);
		free(res);
	}
	else
		printf("./prog <string> <index_start> <size>\n");
	return (0);
}
