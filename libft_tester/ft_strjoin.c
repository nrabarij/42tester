/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrabarij <nrabarij@student.42antanana>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 14:42:24 by nrabarij          #+#    #+#             */
/*   Updated: 2024/03/08 14:54:25 by nrabarij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(int ac, char **av)
{
	char	*res;

	res = NULL;
	if (ac == 3)
	{
		res = ft_strjoin(av[1], av[2]);
		printf("%s\n", res);
		free(res);
	}
	else
		printf("./prog <string_1> <string_2>\n");
	return (0);
}
