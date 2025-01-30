/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 15:49:20 by armitite          #+#    #+#             */
/*   Updated: 2025/01/30 16:05:26 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "test.class.hpp"

int	main(void)
{
	Test instance;

	instance.get_Foo();
	if (instance.set_Foo(-1) == 1)
		std::cout << "Number too low" << std::endl;
	instance.get_Foo();
	
	return (0);
}