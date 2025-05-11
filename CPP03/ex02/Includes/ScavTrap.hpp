/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 13:50:18 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/23 15:53:08 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		// Constructors and descructors cannot override the motherclass
		// There are new ones
		// Otherwise I couldn't print the default message.
		// Canonical Form
		ScavTrap(void);
		ScavTrap(std::string const &name);
		ScavTrap(ScavTrap const &copy);
		~ScavTrap(void);

		// Overload assignment operator
		// (needed if I want to copy more os scavtarps class, otherwise would copy claptrap)
		ScavTrap &operator=(ScavTrap const &copy);

		// Override attack form the mother class
		void attack(std::string const &target);

		// Special ability
		void guardGate(void);
};