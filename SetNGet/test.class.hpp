/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 15:50:23 by armitite          #+#    #+#             */
/*   Updated: 2025/01/30 15:57:39 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_CLASS_HPP
# define TEST_CLASS_HPP

class Test {

public:

	Test(void);
	~Test(void);
	
	void		get_Foo(void) const;
	int			set_Foo(int x);
	
private:
	
	int		_foo;
};

#endif