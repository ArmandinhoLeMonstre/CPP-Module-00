/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 16:47:56 by armitite          #+#    #+#             */
/*   Updated: 2025/01/30 17:27:39 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	ft_islower(int c)
{
	if ((c <= 'z' && c >= 'a'))
		return (1);
	else
		return (0);
}

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}

int	main(int ac, char **av)
{
	int i;
	int x;

	i = 0;
	x = 1;
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (x < ac)
	{
		i = 0;
		while (av[x][i])
		{
			if (ft_islower(av[x][i]))
				av[x][i] = ft_toupper(av[x][i]);
			i++;
		}
		std::cout << av[x];
		x++;
	}
	std::cout << std::endl;

	return (0);
}