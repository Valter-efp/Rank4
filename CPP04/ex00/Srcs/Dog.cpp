/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:08:33 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/23 18:32:10 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog created by default constructor." << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destroyed by destructor." << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "DogSound" << std::endl;
}