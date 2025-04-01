/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 18:11:30 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/01 00:51:54 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

//Constructor for PhoneBook class
PhoneBook::PhoneBook() : _index(0) {
}

//Destructor for PhoneBook class
PhoneBook::~PhoneBook() {
}

//Method to truncate a string to 10 characters
std::string truncate(std::string str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

//Method to add a contact to the PhoneBook
void PhoneBook::add_contact()
{
	int position = PhoneBook::_index % 8;
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
	std::cout << "First name:" << std::endl;
	std::getline(std::cin, first_name);
	std::cout << "Last name:" << std::endl;
	std::getline(std::cin, last_name);
	std::cout << "Nickname:" << std::endl;
	std::getline(std::cin, nickname);
	std::cout << "Phone number:" << std::endl;
	std::getline(std::cin, phone_number);
	std::cout << "Darkest secret:" << std::endl;
	std::getline(std::cin, darkest_secret);
	if (first_name.empty() || last_name.empty() || nickname.empty() || phone_number.empty() || darkest_secret.empty())
	{
		std::cout << "Contact can’t have empty fields! Try again." << std::endl;
		return;
	}
	PhoneBook::_index++;
	PhoneBook::_contacts[position].setContact(first_name, last_name, nickname, phone_number, darkest_secret);
}

//Method to search for a contact in the PhoneBook
void PhoneBook::search_contact()
{
	if (_index > 0)
		std::cout << "     Index|First name|  Lastname|  Nickname|" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (i < _index)
		{
			std::cout << std::setw(10) << i << "|" 
					  << std::setw(10) << truncate(_contacts[i].getfirst_name()) << "|" 
					  << std::setw(10) << truncate(_contacts[i].getlast_name()) << "|" 
					  << std::setw(10) << truncate(_contacts[i].getnickname()) << "|" << std::endl;
		}
	}
	std::string index;
	std::cout << "Wich contact to be displayed?";
	std::getline(std::cin, index);
	if (index.length() == 1 && index[0] >= '0' && index[0] <= '7')
	{
		int i = index[0] - '0';
		if (i < _index)
		{
			std::cout << "First name: " << _contacts[i].getfirst_name() << std::endl;
			std::cout << "Last name: " << _contacts[i].getlast_name() << std::endl;
			std::cout << "Nickname: " << _contacts[i].getnickname() << std::endl;
		}
		else
			std::cout << "Error non existing contact!" << std::endl;
	}
	else
		std::cout << "Contact must be a number between 0 and 7." << std::endl;
}