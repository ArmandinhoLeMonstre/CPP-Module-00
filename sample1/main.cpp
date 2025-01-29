/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 20:08:38 by armitite          #+#    #+#             */
/*   Updated: 2025/01/29 20:11:54 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "sample1.class.hpp"
#include "sample2.class.hpp"

int	main(){
	
	Sample1 instance1('a', 42, 4.2f);
	Sample2 instance2('b', 33, 3.15);

	return 0;
}