/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:25:37 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/21 18:50:36 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes/Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << a << "\t\tis 'a' at start\n" << std::endl;
	std::cout << ++a << "\tis 'a' at ++a\n" << std::endl; //pre-increment shows the value after increment
	std::cout << a << "\tis 'a' after ++a\n" << std::endl;
	std::cout << a++ <<"\tis 'a' at a++\n" << std::endl; //post-increment shows the value before increment
	std::cout << a << "\tis 'a' after a++\n" << std::endl;

	std::cout << b << "\t\tvalue of 'b'\n" << std::endl;

	std::cout << Fixed::max(a, b) << "\t\tthe max of 'a' and 'b'\n" << std::endl;
	std::cout << Fixed::min(a, b) << "\tthe min of 'a' and 'b'\n" << std::endl;

	return (0);
}