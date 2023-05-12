/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnollae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 10:13:38 by csnollae          #+#    #+#             */
/*   Updated: 2022/07/14 10:21:47 by csnollae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab_int;
	int	i;

	if (min >= max)
		return (NULL);
	tab_int = (int *) malloc (sizeof (*tab_int) * (max - min));
	i = 0;
	while (min < max)
	{
		tab_int[i] = min;
		i++;
		min++;
	}
	return (tab_int);
}
