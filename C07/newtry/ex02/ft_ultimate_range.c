/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnollae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 10:22:35 by csnollae          #+#    #+#             */
/*   Updated: 2022/07/14 11:12:10 by csnollae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab_int;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab_int = malloc(sizeof(int) * (max - min));
	if (!(tab_int))
		return (-1);
	i = 0;
	while (min < max)
	{
		tab_int[i] = min;
		i++;
		min++;
	}
	*range = tab_int;
	return (i);
}
