/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:28:15 by armitite          #+#    #+#             */
/*   Updated: 2025/02/05 12:25:00 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <istream>
#include <sstream>
#include <cstring>

Contact::Contact(void) {

	return ;
}

Contact::~Contact(void) {

	return ;
}

void	Contact::display_tab(void) {

	if (!(first_name.empty()))
	{
		const char *str_tmp = first_name.c_str();
		if (std::strlen(str_tmp) <= 10)
		{
			std::cout << std::setw(11) << std::right << first_name << " | ";
		}
		else
		{
			std::string tmp_for_cout = first_name.substr (0,11);
			tmp_for_cout.replace(10,11,".\0");
			std::cout << tmp_for_cout << " | ";
		}
		str_tmp = last_name.c_str();
		if (std::strlen(str_tmp) <= 10)
		{
			std::cout << std::setw(11) << std::right << last_name << " | ";
		}
		else
		{
			std::string tmp_for_cout = last_name.substr (0,11);
			tmp_for_cout.replace(10,11,".\0");
			std::cout << tmp_for_cout << " | ";
		}
		str_tmp = nickname.c_str();
		if (std::strlen(str_tmp) <= 10)
		{
			std::cout <<std::setw(11) << std::right << nickname << " | ";
		}
		else
		{
			std::string tmp_for_cout = nickname.substr (0,11);
			tmp_for_cout.replace(10,11,".\0");
			std::cout << tmp_for_cout << " | ";
		}
	}
}

void	Contact::create_contact(void) {

	std::string str;

	std::cout << "Fill the contact informations :" << std::endl;
	while ((first_name.empty())) 
	{
		std::cout << "First name :";
		std::getline (std::cin, str);
		if (std::cin.eof())
			return ;
		this->first_name = str;
	}
	while ((last_name.empty())) 
	{
		std::cout << "Last name :";
		std::getline (std::cin, str);
		if (std::cin.eof())
			return ;
		this->last_name = str;
	}
	while ((nickname.empty()))
	{
		std::cout << "Nickname :";
		std::getline (std::cin, str);
		if (std::cin.eof())
			return ;
		this->nickname = str;
	}
	while ((phone_number.empty()))
	{
		while (1)
		{
			std::cout << "Phone number :";
			std::getline (std::cin, str);
			const char *input_str = str.c_str();
			int x = 0;
			for (long unsigned int i = 0; i < std::strlen(input_str); i++)
			{
				if (isdigit(input_str[i]) == 0)
				{
					std::cout << "Non numeric" << std::endl;
					x = 1;
					break ;
				}
			}
			if (x == 0)
				break ;
		}
		this->phone_number = str;
	}
	while ((darkest_secret.empty()))
	{
		std::cout << "Darkest secret :";
		std::getline (std::cin, str);
		if (std::cin.eof())
			return ;
		this->darkest_secret = str;
	}
	std::cout << "Contact filled !" << std::endl;
	
	return ;
}

void	Contact::get_contact(void) {

	if ((first_name.empty()))
	{
		std::cout << "This contact is empty !" << std::endl;
		return ;
	}
	std::cout << "First name: " << this->first_name << std::endl;
	std::cout << "Last name: " << this->last_name << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone number: " << this->phone_number << std::endl;
	std::cout << "Darkest secret: " << this->darkest_secret << std::endl;
	
	return ;
}