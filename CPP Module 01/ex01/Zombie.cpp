/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 18:37:42 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/01 19:20:03 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Includes/Zombie.hpp"

/// @brief Destructor of the Zombie class
/// Output a message to indicate zombie destruction
Zombie::~Zombie (void)
{
	std::cout << _name << ": ";
	std::cout << "Bra*POW* *brains splattered all over the walls*" << std::endl;
}

/// @brief Method to initialise the zombie name
/// @param name Zombie name
void	Zombie::initialise (std::string name)
{
	_name = name;
}

/// @brief Method to announce the zombie
/// Output a message to announce the zombie
void	Zombie::announce(void)
{
	std::cout << _name << ": ";
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}