/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 16:01:52 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/02 16:08:44 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Includes/Violence.hpp"

HumanB::HumanB( std::string name )
{
	_name = name;
	_weapon = NULL;
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