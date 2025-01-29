/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sample1.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 19:38:48 by armitite          #+#    #+#             */
/*   Updated: 2025/01/29 19:44:15 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "sample1.class.hpp"


Sample1::Sample1(char p1, int p2, float p3) {

	std::cout << "Constructor called" << std::endl;

	this->a1 = p1;
	std::cout << "this->a1 = " << this->a1 << std::endl;

	this->a2 = p2;
	std::cout << "this->a2 = " << this->a2 << std::endl;

	this->a3 = p3;
	std::cout << "this->a3 = " << this->a3 << std::endl;

	return;
	
}

Sample1::~Sample1(void){

	std::cout << "Destructor called" << std::endl;
	return;

}