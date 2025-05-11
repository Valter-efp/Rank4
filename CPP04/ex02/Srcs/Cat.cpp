/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:11:53 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/28 10:48:05 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/Cat.hpp"

Cat::Cat() : brain(new Brain())
{
	type = "Cat";
	std::cout << "Cat created by default constructor." << std::endl;
}

Cat::Cat(const Cat &src)
{
    std::cout << "Cat copied by copy constructor." << std::endl;
    this->type = src.type;
    // Deep copy of Brain
    this->brain = new Brain(*src.brain);  // Create a new Brain and copy ideas
}

Cat &Cat::operator=(const Cat &src)
{
	std::cout << "Cat assigned by assignment operator." << std::endl;
	if (this != &src)
	{
		Animal::operator=(src);
		if (brain)
			delete brain;
		brain = new Brain(*src.brain);
	}
	return *this;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat destroyed by destructor." << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "CatSound" << std::endl;
}

void Cat::identify() const
{
	std::cout << "This Cat instance is at address: " << this << "\n";
	std::cout << "I also have a Brain at address: " << this->brain << "\n";
}

Brain* Cat::getBrain() const
{
	return brain;
}