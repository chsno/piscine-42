/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnollae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 18:03:46 by csnollae          #+#    #+#             */
/*   Updated: 2022/07/12 12:12:08 by csnollae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	rev_i;
	int	swap;

	i = 0;
	rev_i = size - 1;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[rev_i];
		tab[rev_i] = swap;
		i++;
		rev_i--;
	}
}
