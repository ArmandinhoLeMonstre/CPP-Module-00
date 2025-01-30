/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:28:15 by armitite          #+#    #+#             */
/*   Updated: 2025/01/30 21:53:51 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include <iostream>
#include <string>

Contact::Contact(void) {

	std::cout << "Contact Constructor called" << std::endl;

	return ;
}

Contact::~Contact(void) {

	std::cout << "Contact Destructor called" << std::endl;

	return ;
}

void	Contact::add_first_name(std::string str) {

	this->first_name = str;
	
	return ;
}

void	Contact::get_first_name(void) {

	std::cout << this->first_name << std::endl;
	
	return ;
}

// void	Contact::add_last_name(char *str) {

// 	this->last_name = str;
	
// 	return ;
// }