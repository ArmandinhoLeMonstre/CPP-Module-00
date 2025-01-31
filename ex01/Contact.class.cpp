/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:28:15 by armitite          #+#    #+#             */
/*   Updated: 2025/01/31 15:06:20 by armitite         ###   ########.fr       */
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

void	Contact::create_contact(void) {

	std::string str;

	std::cout << "Add First name :";
	std::cin >> str;
	this->first_name = str;
	std::cout << "Add Last name :";
	std::cin >> str;
	this->last_name = str;
	std::cout << "Add Nickname :";
	std::cin >> str;
	this->nickname = str;
	std::cout << "Add Phone number :";
	std::cin >> str;
	this->phone_number = str;
	std::cout << "Add darkest secret :";
	std::cin >> str;
	this->darkest_secret = str;
	
	return ;
}

void	Contact::get_contact(void) {

	std::cout << this->first_name << std::endl;
	std::cout << this->last_name << std::endl;
	std::cout << this->nickname << std::endl;
	std::cout << this->phone_number << std::endl;
	std::cout << this->darkest_secret << std::endl;
	
	return ;
}