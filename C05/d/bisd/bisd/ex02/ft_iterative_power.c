/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnollae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 18:40:59 by csnollae          #+#    #+#             */
/*   Updated: 2022/07/11 18:57:11 by csnollae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	bis;

	i = 1;
	bis = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (i < power)
	{
		nb = nb * bis;
		i++;
	}
	return (nb);
}
