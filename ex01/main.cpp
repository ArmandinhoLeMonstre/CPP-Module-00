/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainn.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:34:48 by armitite          #+#    #+#             */
/*   Updated: 2025/02/01 17:13:27 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"
#include <iostream>
#include <string>

int	main(void)
{
	std::string str;
	PhoneBook instance;
	instance.contact_nbr = -1;
	
	std::cout << "You created a new Phone Book !" << std::endl;
	std::cout << "Use 'ADD' to add a new contact" << std::endl;
	std::cout << "Use 'SEARCH' to search a contact" << std::endl;
	std::cout << "Use 'EXIT' to exit the Phone Book" << std::endl;
	while (1)
	{
		std::getline (std::cin, str);
		if (std::cin.eof())
			break ;
		else if (str == "EXIT")
		{
			std::cout << "Closing the PhoneBook..." << std::endl;
			break ;
		}
		else if (str == "ADD")
		{
			instance.add_contact();
		}
		else if (str == "SEARCH")
		{
			instance.display_contacts();
			instance.get_contact();
		}
		else
			std::cout << "Bad input, try to use 'ADD', 'SEARCH' or 'EXIT'" << std::endl;
	}
	return (0);
}