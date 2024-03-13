/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfararan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:53:29 by nfararan          #+#    #+#             */
/*   Updated: 2024/03/13 14:03:02 by nfararan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memory.h"

void	free_all_allocated(int number, ...)
{
	va_list	args;
	int		i;
	void	*mem;

	va_start(args, number);
	i = 0;
	mem = (void *)0;
	while (i < number)
	{
		mem = va_arg(args, void *);
		if (mem)
		{
			free(mem);
			mem = (void *)0;
		}
		i++;
	}
	va_end(args);
}
