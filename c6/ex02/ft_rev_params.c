/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshou-xi <wshou-xi@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 18:23:59 by wshou-xi          #+#    #+#             */
/*   Updated: 2025/03/19 18:24:00 by wshou-xi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	(void)argc;
	i = 0;
	while (argv[i])
		i++;
	j = i - 1;
	while (j > 0)
	{
		write(1, argv[j], 1);
		write(1, "\n", 1);
		j--;
	}
}
