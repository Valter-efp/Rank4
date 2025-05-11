/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 16:01:52 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/21 14:56:09 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Includes/Violence.hpp"

//HumanB needs to initialize the pointer to weapon when it is called, not when is created.
HumanB::HumanB( std::string name )
{
	_name = name;
	_weapon = NULL;
	//std::cout << "[" << _name << " has been created.]" << std::endl;
}

HumanB::~HumanB( void )
{
	//std::cout << "[" << _name << " has been destroyed.]" << std::endl;
}

void	HumanB::attack( void )
{
	if (_weapon == NULL)
	{
		std::cout << _name << "doesn't have a weapon!" << std::endl;
		return ;
	}
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void	HumanB::setWeapon( Weapon &weapon )
{
	_weapon = &weapon;
}