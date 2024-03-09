/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrabarij <nrabarij@student.42antanana>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 15:13:22 by nrabarij          #+#    #+#             */
/*   Updated: 2024/03/08 16:10:21 by nrabarij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(int ac, char **av)
{
	char	*res;

	res = NULL;
	if (ac == 3)
	{
		res = ft_strtrim(av[1], av[2]);
		printf("%s\n", res);
		free(res);
	}
	else
		printf("./prog <string_to_trim> <string_trimmer>\n");
	return (0);
}
