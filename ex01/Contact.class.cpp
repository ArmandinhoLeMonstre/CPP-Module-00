/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:28:15 by armitite          #+#    #+#             */
/*   Updated: 2025/02/01 15:58:26 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include <iostream>
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
			std::cout << first_name << " | ";
		else
		{
			std::string tmp_for_cout = first_name.substr (0,11);
			tmp_for_cout.replace(10,11,".\0");
			std::cout << tmp_for_cout << " | ";
		}
		str_tmp = last_name.c_str();
		if (std::strlen(str_tmp) <= 10)
			std::cout << last_name << " | ";
		else
		{
			std::string tmp_for_cout = last_name.substr (0,11);
			tmp_for_cout.replace(10,11,".\0");
			std::cout << tmp_for_cout << " | ";
		}
		str_tmp = nickname.c_str();
		if (std::strlen(str_tmp) <= 10)
			std::cout << nickname << " | ";
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
	std::cin.ignore();
	while ((first_name.empty())) 
	{
		std::cout << "First name :";
		std::getline (std::cin, str);
		this->first_name = str;
	}
	while ((last_name.empty())) 
	{
		std::cout << "Last name :";
		std::getline (std::cin, str);
		this->last_name = str;
	}
	while ((nickname.empty()))
	{
		std::cout << "Nickname :";
		std::getline (std::cin, str);
		this->nickname = str;
	}
	while ((phone_number.empty()))
	{
		std::cout << "Phone number :";
		std::getline (std::cin, str);
		this->phone_number = str;
	}
	while ((darkest_secret.empty()))
	{
		std::cout << "Darkest secret :";
		std::getline (std::cin, str);
		this->darkest_secret = str;
	}
	
	return ;
}

void	Contact::get_contact(void) {

	std::cout << "First name: " << this->first_name << std::endl;
	std::cout << "Last name:" << this->last_name << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone number: " << this->phone_number << std::endl;
	std::cout << "Darkest secret: " << this->darkest_secret << std::endl;
	
	return ;
}