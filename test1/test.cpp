/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:42:36 by armitite          #+#    #+#             */
/*   Updated: 2025/01/29 14:44:18 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

namespace ko
{
	int test = 1;
}

namespace po
{
	int test = 2;
}

int	main()
{
	printf("%d\n", ko::test);
	printf("%d\n", po::test);
}