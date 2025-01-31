/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:34:48 by armitite          #+#    #+#             */
/*   Updated: 2025/01/31 16:37:23 by armitite         ###   ########.fr       */
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
	
	while (1)
	{
		std::cin >> str;
		if (std::cin.eof())
			break ;
		if (str == "EXIT")
			break ;
		if (str == "ADD")
		{
			instance.add_contact();
		}
		if (str == "GET")
		{
			instance.get_contact();
		}
		//std::cout << "Word :" << str << std::endl;
	}
	return (0);
}