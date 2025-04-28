/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshou-xi <wshou-xi@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 12:36:42 by wshou-xi          #+#    #+#             */
/*   Updated: 2025/03/17 12:36:44 by wshou-xi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_nbrchar(int nbr);

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	ft_nbrchar(nb);
}

void	ft_nbrchar(int nbr)
{
	char	mod;

	if (nbr >= 10)
	{
		ft_nbrchar(nbr / 10);
	}
	mod = nbr % 10 + '0';
	write(1, &mod, 1);
}
