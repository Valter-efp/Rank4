/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 19:27:12 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/17 16:15:17 by vafernan         ###   ########.fr       */
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
	int MessageWidth = 32;
	
	std::cout << std::setw(MessageWidth) << "📍 Address of string:" << &str << std::endl;
	std::cout << std::setw(MessageWidth) << "🔗 Address held by pointer:" << stringPTR << std::endl;
	std::cout << std::setw(MessageWidth) << "📎 Address held by reference:" << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << std::setw(MessageWidth) << "🧠 Value of string:" << str << std::endl;
	std::cout << std::setw(MessageWidth) << "👉 Value pointed by pointer:" << *stringPTR << std::endl;
	std::cout << std::setw(MessageWidth) << "🔍 Value via reference:" << stringREF << std::endl;

	return(0);
}