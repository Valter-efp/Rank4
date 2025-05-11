/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 19:50:06 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/21 14:51:54 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./Violence.hpp"

// This class does not require a "weapon"
class HumanB
{
	private:
		Weapon		*_weapon; // Pointer to a Weapon (can be non existent)
		std::string	_name;

	public:
		// Constructor
		HumanB( std::string name );

		// Destructor
		~HumanB( void );

		// Methods
		void	setWeapon( Weapon &weapon );
		void	attack( void );
};