/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrabarij <nrabarij@student.42antanana>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:39:24 by nrabarij          #+#    #+#             */
/*   Updated: 2024/03/07 18:46:38 by nrabarij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(int ac, char **av)
{
	char	*dup;

	if (ac == 2)
	{
		dup = NULL;
		printf("avant duplicate: %s\n", dup);
		dup = ft_strdup(av[1]);
		printf("apres duplicate: %s\n", dup);
		free(dup);
	}
	return (0);
}
