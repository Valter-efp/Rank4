/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:08:33 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/28 10:48:22 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/Dog.hpp"

Dog::Dog() : brain(new Brain())
{
	type = "Dog";
	std::cout << "Dog created by default constructor." << std::endl;
}

Dog::Dog(const Dog &src)
{
    std::cout << "Dog copied by copy constructor." << std::endl;
    this->type = src.type;
    // Deep copy of Brain
    this->brain = new Brain(*src.brain);  // Create a new Brain and copy ideas
}

Dog &Dog::operator=(const Dog &src)
{
	std::cout << "Dog assigned by assignment operator." << std::endl;
	if (this != &src)
	{
		Animal::operator=(src);
		if (brain)
			delete brain;
		brain = new Brain(*src.brain);
	}
	return *this;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog destroyed by destructor." << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "DogSound" << std::endl;
}

void Dog::identify() const
{
	std::cout << "This Dog instance is at address: " << this << "\n";
	std::cout << "I also have a Brain at address: " << this->brain << "\n";
}

Brain* Dog::getBrain() const
{
	return brain;
}