/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 16:01:28 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/21 14:56:15 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Includes/Violence.hpp"

// Constructor
HumanA::HumanA( std::string name, Weapon &weapon ) : _name(name), _weapon(weapon)
{
	//std::cout << "[" << _name << " has been created.]" << std::endl;
}

// Destructor
HumanA::~HumanA( void )
{
	//std::cout << "[" << _name << " has been destroyed.]" << std::endl;
}

// Method to attack
void	HumanA::attack( void )
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}