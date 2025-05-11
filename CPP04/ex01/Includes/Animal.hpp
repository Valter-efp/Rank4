/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 17:59:32 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/25 14:49:03 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <typeinfo>

class Animal
{
	protected:
		std::string type;

	public:
		// Orthodox Canonical Form
		Animal();								// Defaul Constructor
		Animal(const Animal &src);				// Copy Constructor
		Animal &operator=(const Animal &src);	// Copy assignment operator
		virtual ~Animal();						// Destructor

		// Methods
		// MakSound is virtual because it is inteded to be overwritten by
		// derivate classes. When they call makeSound on a ptr reference to animal
		// will execute the method corresponding to the actual type of obj.
		virtual void makeSound() const;			
		virtual void identify() const;
		virtual void printAddress() const;
		//Acessors
		std::string getType() const;
};