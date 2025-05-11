/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 18:12:16 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/17 13:32:07 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;

	public:
		// Constructors
		Contact();
		// Deconstructors
		~Contact();
		
		// Methods:
		// Set Contact's details;
		// Get the first name of the contact;
		// Get the last name of the contact;
		// Get the nickname of the contact.
		void setContact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret);
		std::string	getfirst_name();
		std::string getlast_name();
		std::string getnickname();
};