/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrabarij <nrabarij@student.42antanana>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 10:54:04 by nrabarij          #+#    #+#             */
/*   Updated: 2024/03/08 11:46:43 by nrabarij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	i;

	if (ac > 1)
	{
		i = 1;
		while (av[i])
		{
			ft_putchar_fd(av[i++][0], 1);
			printf("\n");
		}
	}
	else
	printf("./prog <char_c>\n");
	return (0);
}
