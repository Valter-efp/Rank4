/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 13:36:26 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/23 13:36:27 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>
#include <string>
#include <limits>

class ClapTrap
{
	private:
		std::string	_name;
		int			_hit_points;
		int			_energy_points;
		int			_damage;

	public:
		// Orthodox Canonical Form
		ClapTrap(void);						// Constructor
		ClapTrap(std::string const &name);	// Copy Constructor
		ClapTrap(ClapTrap const &copy);		// Copy assignment operator
		~ClapTrap(void);						// Destructor
		
		// Methods
		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		// Overloaded assignment operator
		ClapTrap	&operator=(ClapTrap const &copy);

		// Acessors
		std::string const	&get_name(void) const;
		int const			&get_hit_points(void) const;
		int const			&get_energy_points(void) const;
		int const			&get_damage(void) const;
		void				set_name(std::string const &name);
		void				set_hit_points(int const &value);
		void				set_energy_points(int const &value);
		void				set_damage(int const &value);
};
