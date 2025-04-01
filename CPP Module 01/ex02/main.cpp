/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 19:27:12 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/01 19:44:27 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

int main( void )
{
	std::string	str = "HI THIS IS BRAIN";   /// string variable
	std::string	*stringPTR = &str;          /// pointer to string variable, using & to get the address
	std::string	&stringREF = str;           /// reference to string variable, any change in the refece will change the variable

    std::cout << std::left;
	std::cout << std::setw(40) << "Memory address of string variable: " << &str << std::endl;
	std::cout << std::setw(40) << "Memory address held by stringPTR: " << stringPTR << std::endl;
	std::cout << std::setw(40) << "Memory address held by stringREF: " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << std::setw(40) <<  "Value of string variable: " << str << std::endl;
	std::cout << std::setw(40) <<  "Value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << std::setw(40) <<  "Value pointed to stringREF: " << stringREF << std::endl;
}