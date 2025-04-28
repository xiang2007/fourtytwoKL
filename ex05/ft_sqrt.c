/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshou-xi <wshou-xi@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 12:57:17 by wshou-xi          #+#    #+#             */
/*   Updated: 2025/03/17 12:57:21 by wshou-xi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	count;
	int	mult;

	count = 1;
	mult = 0;
	while (count < nb)
	{
		if (mult != nb)
		{
			count++;
			mult = count * count;
		}
		if (mult == nb)
			return (count);
	}
	return (0);
}
