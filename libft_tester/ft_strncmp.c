/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrabarij <nrabarij@student.42antanana>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 10:16:06 by nrabarij          #+#    #+#             */
/*   Updated: 2024/03/08 10:19:31 by nrabarij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 4)
		printf("[%d]\n", ft_strncmp(av[1], av[2], atoll(av[3])));
	else
		printf("./prog <string_1> <string_2> <size_t>\n");
	return (0);
}
