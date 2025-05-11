/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 14:01:26 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/25 14:48:57 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Animal created by default constructor." << std::endl;
}

Animal::Animal(const Animal &other) : type(other.type)
{
	std::cout << "Animal copied by copy constructor." << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	if(this != &other)
		{
			type = other.type;
			std::cout << "Animal assigned by assignment operator." << std::endl;
		}
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destroyed by destructor." << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "AnimalSound." << std::endl;
}

std::string Animal::getType() const
{
	return type;
}

void Animal::identify() const
{
	std::cout << "I am an Animal 🐾\n";
}

void Animal::printAddress() const
{
	std::cout << "Animal part address: " << this << "\n";
}
