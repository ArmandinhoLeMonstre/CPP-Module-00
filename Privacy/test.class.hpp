/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 15:02:19 by armitite          #+#    #+#             */
/*   Updated: 2025/01/30 15:05:04 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_CLASS_HPP
# define TEST_CLASS_HPP

class Test {

public:

	int PublicFoo;
	
	Test(void);
	~Test(void);
	
	void	publicBar(void) const;
	
private:

	int	_PrivateFoo;

	void	_privateBar(void) const;
};

#endif