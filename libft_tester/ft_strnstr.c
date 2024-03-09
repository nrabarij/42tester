/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrabarij <nrabarij@student.42antanana>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 10:16:06 by nrabarij          #+#    #+#             */
/*   Updated: 2024/03/08 10:52:44 by nrabarij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 3)
		printf("%s\n", ft_strnstr(av[1], av[2], ft_strlen(av[1])));
	else
		printf("./prog <string_haystack> <string_to_find>\n");
	return (0);
}
