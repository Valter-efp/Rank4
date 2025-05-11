/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 18:11:42 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/17 13:22:59 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact _contacts[8];
		int		_index;

	public:
		// Constructors
		PhoneBook();
		// Deconstructors
		~PhoneBook();
		
		// Methods:
		// Add a contact;
		// Search for a contact.
		void add_contact();
		void search_contact();
};