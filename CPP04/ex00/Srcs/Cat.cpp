/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:11:53 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/23 18:32:07 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat created by default constructor." << std::endl;
}
Cat::~Cat()
{
	std::cout << "Cat destroyed by destructor." << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "CatSound" << std::endl;
}