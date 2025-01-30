/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 15:05:17 by armitite          #+#    #+#             */
/*   Updated: 2025/01/30 15:32:44 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.class.hpp"
#include <iostream>

Test::Test(void) {
	
	std::cout << "Constructor called" << std::endl;

	this->PublicFoo = 0;
	std::cout << "this->publicFoo: " << this->PublicFoo << std::endl;
	this->_PrivateFoo = 0;
	std::cout << "this->_Privatefoo: " << this->_PrivateFoo << std::endl;
	
	this->publicBar();
	this->_privateBar();

	return ;
}

Test::~Test(void) {

	std::cout << "Destructor called" << std::endl;
	return ;
}

void	Test::publicBar(void) const {

	std::cout << "Member function publicBar called" << std::endl;
	return ;
}

void	Test::_privateBar(void) const {

	std::cout << "Member function privateBar called" << std::endl;
	return ;
}