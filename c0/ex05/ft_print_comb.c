/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshou-xi <wshou-xi@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 18:56:57 by wshou-xi          #+#    #+#             */
/*   Updated: 2025/03/04 18:57:16 by wshou-xi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_comb(void);

void	ft_print(char first, char second, char last)
{
	if (first == '7' && second == '8' && last == '9')
	{
		write(1, &first, 1);
		write(1, &second, 1);
		write(1, &last, 1);
	}
	else
	{
		write(1, &first, 1);
		write(1, &second, 1);
		write(1, &last, 1);
		write(1, " ", 1);
		write(1, ",", 1);
	}
}

void	ft_print_comb(void)
{
	char	first;
	char	second;
	char	last;

	first = '0';
	while (first <= '7')
	{
		second = first + 1;
		while (second <= '8')
		{
			last = second + 1;
			while (last <= '9')
			{
				ft_print(first, second, last);
				last++;
			}
			second++;
		}
		first++;
	}
}

int	main(void)
{
	ft_print_comb();
}
