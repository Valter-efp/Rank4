/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 18:12:04 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/01 18:17:15 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Includes/Contact.hpp"

//Constructor for Contact class
Contact::Contact() {
}

//Destructor for Contact class
Contact::~Contact() {
}

//Method to set the contact information
void Contact::setContact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret)
{
	_first_name = first_name;
	_last_name = last_name;
	_nickname = nickname;
	_phone_number = phone_number;
	_darkest_secret = darkest_secret;
}

//Getter for the contact public information
std::string Contact::getfirst_name()
{
	return _first_name;
}

//Getter for the contact public information
std::string Contact::getlast_name()
{
	return _last_name;
}

//Getter for the contact public information
std::string Contact::getnickname()
{
	return _nickname;
}