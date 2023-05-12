/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnollae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 09:20:21 by csnollae          #+#    #+#             */
/*   Updated: 2022/07/08 10:00:51 by csnollae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			swap = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = swap;
			i = 0;
		}
		else
			i++;
	}
}
