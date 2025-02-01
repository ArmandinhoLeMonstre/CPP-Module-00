/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 16:47:56 by armitite          #+#    #+#             */
/*   Updated: 2025/02/01 18:20:27 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

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
			if (std::islower(av[x][i]))
           		av[x][i] = std::toupper(av[x][i]); 
			i++;
		}
		std::cout << av[x];
		x++;
	}
	std::cout << std::endl;

	return (0);
}