/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrabarij <nrabarij@student.42antanana>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:39:24 by nrabarij          #+#    #+#             */
/*   Updated: 2024/03/09 11:05:50 by nrabarij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(int ac, char **av)
{
	int		i;
	char	**res;

	i = 0;
	res = NULL;
    if (ac == 3)
	{
		res = ft_split(av[1], av[2][0]);
		while (res[i])
        {
            printf("%s\n", res[i]);
			i++;
        }
		while (i > 0)
			free(res[--i]);
		free(res);
	}
	else
		printf("./prog <string_to_split> <sep_character>\n");
	return (0);
}
