/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 18:15:30 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/17 13:29:27 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Includes/PhoneBook.hpp"

int main()
{
	std::string command;
	PhoneBook PhoneBook;

	while (1)
	{
		std::cout << "Choose a command: ADD, SEARCH OR EXIT: ";
		std::getline(std::cin, command);
		
		if (command == "ADD")
			PhoneBook.add_contact();
		else if (command == "SEARCH")
			PhoneBook.search_contact();
		else if (command == "EXIT")
			break ;
		else
			std::cout << "Invalid command! (This is a simple phonebook, give it a break!)" << std::endl;
	}
	return (0);
}