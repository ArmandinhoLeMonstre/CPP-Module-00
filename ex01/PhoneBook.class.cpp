/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 18:59:17 by armitite          #+#    #+#             */
/*   Updated: 2025/01/31 16:58:47 by armitite         ###   ########.fr       */
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

	std::cout << "PhoneBook Constructor called" << std::endl;

	return ;
}

PhoneBook::~PhoneBook(void) {

	std::cout << "PhoneBook Destructor called" << std::endl;

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

void	PhoneBook::get_contact(void) {

	std::string input;
	int			input_int;
	int			checker;
	
	checker = 0;
	input_int = -1;
	while (checker != 1)
	{
		std::cout << "Contact number: ";
		std::cin >> input;
		const char *input_str = input.c_str();
		long unsigned int i;
		printf("%s\n", input_str);
		i = 0;
		while (i < std::strlen(input_str))
		{
			if (isdigit(input_str[i]) != 0)
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
			if (!(input_int >= 0 && input_int <= 7))
				std::cout << "Contact index need to be between 0 & 7" << std::endl;
			else
				checker = 1;
		}
	}
	contact[input_int].get_contact();
	
	return ;
}
