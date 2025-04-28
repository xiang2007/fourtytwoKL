/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshou-xi <wshou-xi@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 09:15:26 by wshou-xi          #+#    #+#             */
/*   Updated: 2025/03/19 09:15:28 by wshou-xi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//n! = n * (n-1) * (n-2) * (n-3) ** ... * 3 * 2 * 1
int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}