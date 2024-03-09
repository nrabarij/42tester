/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrabarij <nrabarij@student.42antanana>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 13:09:20 by nrabarij          #+#    #+#             */
/*   Updated: 2024/03/08 16:20:29 by nrabarij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n);

int	main(int ac, char **av)
{
	char	*test;

	test = "this is testing if we find something like\0 a string in memory.";
	if (ac == 2)
	{
		printf("string avant memchr: %s\n", test);
		test = ft_memchr(test, 97, atoll(av[1]));
		printf("string apres memchr: %s\n", test);
	}
	else
		printf("./prog <size_t>\n");
	return (0);
}
