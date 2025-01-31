/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 18:59:41 by armitite          #+#    #+#             */
/*   Updated: 2025/01/31 14:41:54 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
#include "Contact.class.hpp"

class PhoneBook {

public:
	
	PhoneBook(void);
	~PhoneBook(void);
	
	int		contact_nbr;
	
	void	add_contact(void);
	void	get_contact(void);


private:

	Contact	contact[8];
};

#endif