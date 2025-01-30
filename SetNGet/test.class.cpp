/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 15:52:51 by armitite          #+#    #+#             */
/*   Updated: 2025/01/30 16:05:07 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.class.hpp"
#include <iostream>

Test::Test(void) {
	
	std::cout << "constructor Called" << std::endl;
	this->_foo = 0;
	std::cout << "Le foo ds contruct: " << this->_foo << std::endl;
	return ;
}

Test::~Test(void) {

	std::cout << "Destruct called" << std::endl;

	return ;
}

int	Test::set_Foo(int x) {

	if (x > 0)
		this->_foo = x;
	else
		return (1);
	
	return (0);
}

void Test::get_Foo(void) const {

	std::cout << "The foo equals : " << this->_foo << " now !" << std::endl;
}

