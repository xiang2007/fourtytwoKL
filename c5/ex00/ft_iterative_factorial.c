/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshou-xi <wshou-xi@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 09:14:13 by wshou-xi          #+#    #+#             */
/*   Updated: 2025/03/19 09:14:14 by wshou-xi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	temp;

	if (nb < 0)
		return (0);
	temp = 1;
	while (nb > 1)
	{
		temp = temp * nb;
		nb--;
	}
	return (temp);
}
