/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 19:48:50 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/21 14:55:19 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./Violence.hpp"

// This class requires a "weapon" from the moment it is created.
class HumanA
{
	private:
		std::string	_name;
		Weapon		&_weapon; // A reference to a Weapon (must be assigned during construction)
		
	public:
		// Constructor
		HumanA( std::string name, Weapon &weapon );

		// Destructor
		~HumanA( void );

		// Method to attack
		void	attack( void );
};