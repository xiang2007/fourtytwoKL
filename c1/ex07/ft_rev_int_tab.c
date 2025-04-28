/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshou-xi <wshou-xi@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 08:01:18 by wshou-xi          #+#    #+#             */
/*   Updated: 2025/03/10 08:01:20 by wshou-xi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putnbr(int n)
{
	char	c;

	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
	c = (n % 10) + '0';
	printf("%c", c);
}

void	ft_int_rev_tab(int *tab, int size)
{
	int	i;

	i = size - 1;
	while (i >= 0)
	{
		ft_putnbr(tab[i]);
		i--;
	}
}

int	main(void)
{
	int	tab[] = {132145879,879546321};
	int	size = sizeof(tab) / sizeof(tab[0]);

	ft_int_rev_tab(tab, size);
	return (0);
}

