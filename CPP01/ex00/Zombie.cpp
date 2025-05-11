/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 17:45:01 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/17 13:36:57 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Includes/Zombie.hpp"

// Constructors
Zombie::Zombie (std::string name)
{
	_name = name;
}

// Deconstructors
Zombie::~Zombie (void)
{
	std::cout << _name << ": ";
	std::cout << "Bra*POW* *brains splattered all over the walls*" << std::endl;
}

//Method to announce the zombie
void	Zombie::announce(void)
{
	std::cout << _name << ": ";
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}