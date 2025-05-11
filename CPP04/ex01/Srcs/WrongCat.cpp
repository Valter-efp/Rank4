/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:17:27 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/23 18:32:15 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../Includes/WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "WrongCat created by default constructor." << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destroyed by destructor." << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat sound! (Whatever that is...)" << std::endl;
}