/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sample2.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 19:50:58 by armitite          #+#    #+#             */
/*   Updated: 2025/01/29 20:04:32 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "sample2.class.hpp"


Sample2::Sample2(char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3) {

	std::cout << "Constructor called" << std::endl;

	std::cout << "this->a1 = " << this->a1 << std::endl;
	std::cout << "this->a2 = " << this->a2 << std::endl;
	std::cout << "this->a3 = " << this->a3 << std::endl;

	return;
	
}

Sample2::~Sample2(void){

	std::cout << "Destructor called" << std::endl;
	return;

}