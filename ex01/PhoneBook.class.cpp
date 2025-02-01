/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 18:59:17 by armitite          #+#    #+#             */
/*   Updated: 2025/02/01 17:49:13 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <ctype.h>
#include <cstdlib>
#include <sstream>
#include <stdio.h>

PhoneBook::PhoneBook(void) {

	return ;
}

PhoneBook::~PhoneBook(void) {

	return ;
}

void	PhoneBook::add_contact(void) {

	std::string str;
	Contact contact;

	this->contact_nbr++;
	contact.create_contact();
	this->contact[contact_nbr % 8] = contact;

	return ;
}

void	PhoneBook::display_contacts(void) {

	int	i = 1;
	
	std::cout << "In | First name  | Last name   | Nickname    |" << std::endl;
	while (i <= 8)
	{
		std::cout << i << "  | ";
		contact[i - 1].display_tab();
		std::cout << std::endl;
		i++;
	}
}

void	PhoneBook::get_contact(void) {

	std::string input;
	int			input_int;
	int			checker;
	
	checker = 0;
	input_int = -1;
	while (checker != 1)
	{
		std::cout << "Contact index: ";
		std::getline (std::cin, input);
		const char *input_str = input.c_str();
		long unsigned int i = 0;
		while (i < std::strlen(input_str))
		{
			if (isdigit(input_str[i]) == 0)
			{
				std::cout << "Non numeric" << std::endl;
				break ;
			}
			i++;
		}
		if (i == std::strlen(input_str))
		{
			std::stringstream ss(input);
			ss >> input_int;
			if (std::cin.eof())
				return ;
			if (!(input_int >= 1 && input_int <= 8))
				std::cout << "Contact index need to be between 1 & 8" << std::endl;
			else
				checker = 1;
		}
	}
	contact[input_int - 1].get_contact();
	
	return ;
}