/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:10:24 by armitite          #+#    #+#             */
/*   Updated: 2025/01/30 21:53:13 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP
#include <string>

class Contact {

public:
	
	Contact(void);
	~Contact(void);

	std::string first_name;
	
	void	add_first_name(std::string str);
	void	get_first_name(void);

private:

	char	*_darkest_secret;
};

#endif