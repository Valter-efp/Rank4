/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:15:09 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/23 18:32:13 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "WrongAnimal";
	std::cout << "WrongAnimal created by default constructor." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destroyed by destructor." << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Somekind of WrongAnimal sound." << std::endl;
}

std::string WrongAnimal::getType() const
{
	return type;
}