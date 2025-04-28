/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshou-xi <wshou-xi@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 12:57:17 by wshou-xi          #+#    #+#             */
/*   Updated: 2025/03/19 09:27:01 by wshou-xi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	count;

	if (nb < 0)
		return (0);
	count = 1;
	while (count <= nb / count)
	{
		if (count * count == nb)
			return (count);
		count++;
	}
	return (0);
}
