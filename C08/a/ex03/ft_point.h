/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csnollae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 18:25:22 by csnollae          #+#    #+#             */
/*   Updated: 2022/07/19 18:30:40 by csnollae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_POINT_H

# define FT_POINT_H

typedef struct points
{
	int	x;
	int	y;
}			t_point;

void	set_point(t_point *point);

#endif
