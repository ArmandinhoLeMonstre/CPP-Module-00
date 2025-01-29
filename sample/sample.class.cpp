/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 19:07:38 by armitite          #+#    #+#             */
/*   Updated: 2025/01/29 19:30:41 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "sample.class.hpp"

Sample::Sample(void)
{
	std::cout << "Constructor called" << std::endl;
	
	this->foo = 42;
	std::cout << "this->foo: " << this->foo << std::endl;

	this->bar();
	
	return;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}


void	Sample::bar(void)
{
	std::cout << "Member function bar called" << std::endl;
	return;
}