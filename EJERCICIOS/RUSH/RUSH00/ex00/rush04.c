/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druiz-ca <druiz-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 16:15:10 by druiz-ca          #+#    #+#             */
/*   Updated: 2023/09/24 16:51:21 by druiz-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int x);

void	funcionif(int x, int y, int cont_x, int cont_y)
{
	if ((cont_x == 1 && cont_y == 1) || (cont_x == x && cont_y == y && x > 1
			&& y != 1))
		ft_putchar('A');
	if ((cont_x > 1 && cont_x < x && cont_y == 1) || (cont_x > 1 && cont_x < x
			&& cont_y == y))
		ft_putchar('B');
	if ((cont_y > 1 && cont_y < y && cont_x == x) || (cont_y > 1 && cont_y < y
			&& cont_x == 1))
		ft_putchar('B');
	if ((cont_x == 1 && cont_y == y && y > 1) || (cont_y == 1 && cont_x == x
			&& x > 1))
		ft_putchar('C');
	if ((cont_x != 1 && cont_x != x) && (cont_y != 1 && cont_y != y))
		ft_putchar(' ');
	if (cont_x == x)
		ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	cont_x;
	int	cont_y;

	if (x <= 0 || y <= 0)
	{
		write(1, "Error, por favor introduce un número mayor a 0.", 48);
	}
	if ((x > 1 && y != 0) || (x != 0 && y > 1))
	{
		cont_y = 1;
		while (cont_y <= y)
		{
			cont_x = 1;
			while (cont_x <= x)
			{
				funcionif(x, y, cont_x, cont_y);
				cont_x++;
			}
			cont_y++;
		}
	}
}