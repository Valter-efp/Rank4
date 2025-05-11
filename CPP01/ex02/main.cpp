/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 19:27:12 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/21 14:30:44 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

// Address: Memory location where variable is stored;
// Pointer: Variable that stores the address of another variable;
// Reference: Alias to another variable, referes directly to the variable
int main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << std::left;
	int MessageLen = 32;
	
	std::cout << std::setw(MessageLen) << "📍 Address of string:" << &str << std::endl;
	std::cout << std::setw(MessageLen) << "🔗 Address held by pointer:" << stringPTR << std::endl;
	std::cout << std::setw(MessageLen) << "📎 Address held by reference:" << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << std::setw(MessageLen) << "🧠 Value of string:" << str << std::endl;
	std::cout << std::setw(MessageLen) << "👉 Value pointed by pointer:" << *stringPTR << std::endl;
	std::cout << std::setw(MessageLen) << "🔍 Value via reference:" << stringREF << std::endl;

	return(0);
}