/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrabarij <nrabarij@student.42antanana>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 13:09:20 by nrabarij          #+#    #+#             */
/*   Updated: 2024/03/08 16:11:21 by nrabarij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 4)
		printf("[%d]\n", ft_memcmp(av[1], av[2], atoll(av[3])));
	else
		printf("./prog <string_1> <string_2> <size_t>\n");
	return (0);
}
