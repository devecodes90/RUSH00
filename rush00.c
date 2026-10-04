/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelariv <jdelariv@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 16:46:10 by jdelariv          #+#    #+#             */
/*   Updated: 2026/10/03 16:46:10 by jdelariv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	negatif_ou_le_zero(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write(1, "Vous connaissez des carrés géométriques en", 42);
		write(1, " négatifs ou qui commence par 0 ??????????", 42);
		ft_putchar('\n');
		return ;
	}
	if (x == 1 && y == 1)
	{
		ft_putchar('o');
		ft_putchar('\n');
		return ;
	}
}

void	x_en_haut_en_bas(int x)
{
	int	a;

	a = 2;
	ft_putchar('o');
	while (a != x)
	{
		ft_putchar('-');
		a++;
	}
	a = 2;
	ft_putchar('o');
	ft_putchar('\n');
}

void	x_mais_au_milieu(int x)
{
	int	a;

	a = 2;
	while (a <= x)
	{
		if (a == 2)
		{
			ft_putchar('|');
		}
		if (a == x)
		{
			ft_putchar('|');
			a = 2;
			break ;
		}
		ft_putchar(' ');
		a++;
	}
}

void	ca_bouge_sur_les_y(int x, int y)
{
	int	b;

	b = 2;
	if (x == 1)
	{
		ft_putchar('o');
		ft_putchar('\n');
		while (b != y)
		{
			ft_putchar('|');
			ft_putchar('\n');
			b++;
		}
		ft_putchar('o');
		ft_putchar('\n');
		return ;
	}
	while (b != y)
	{
		x_mais_au_milieu(x);
		ft_putchar('\n');
		b++;
	}
}

void	rush(int x, int y)
{
	negatif_ou_le_zero(x, y);
	if (y == 1 && x != 1)
		x_en_haut_en_bas(x);
	if (x == 1 && y != 1)
		ca_bouge_sur_les_y(x, y);
	if (x > 1 && y > 1)
	{
		x_en_haut_en_bas(x);
		ca_bouge_sur_les_y(x, y);
		x_en_haut_en_bas(x);
	}
}
