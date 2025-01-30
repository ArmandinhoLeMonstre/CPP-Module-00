/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 15:02:10 by armitite          #+#    #+#             */
/*   Updated: 2025/01/30 15:39:44 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.class.hpp"
#include <iostream>

int main (void)
{
	Test instance;

	instance.PublicFoo = 42;
	std::cout << "instance :" << instance.PublicFoo << std::endl;
}