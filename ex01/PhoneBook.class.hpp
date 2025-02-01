/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 18:59:41 by armitite          #+#    #+#             */
/*   Updated: 2025/02/01 12:46:48 by armitite         ###   ########.fr       */
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
	
	void	display_contacts(void);
	void	add_contact(void);
	void	get_contact(void);


private:

	Contact	contact[8];
};

#endif