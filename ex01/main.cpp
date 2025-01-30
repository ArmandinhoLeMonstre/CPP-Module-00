/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:34:48 by armitite          #+#    #+#             */
/*   Updated: 2025/01/30 21:57:02 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include <iostream>
#include <string>

int	main(void)
{
	std::string str;
	Contact instance;
	
	while (1)
	{
		std::cin >> str;
		if (str == "EXIT")
			break ;
		if (str == "ADD")
		{
			std::string tmp;
			std::cin >> tmp;
			instance.add_first_name(tmp);
		}
		if (str == "GET")
		{
			instance.get_first_name();
		}
		//std::cout << "Word :" << str << std::endl;
	}
	return (0);
}