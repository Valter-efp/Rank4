/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 13:58:09 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/23 13:58:47 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Includes/ScavTrap.hpp"

// Default constructor
ScavTrap::ScavTrap(void) : ClapTrap("default")
{
	this->set_hit_points(100);
	this->set_energy_points(50);
	this->set_damage(20);
	std::cout << "ScavTrap Default constructor called." << std::endl;
}

// Parameterized constructor
ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name)
{
	this->set_hit_points(100);
	this->set_energy_points(50);
	this->set_damage(20);
	std::cout << "ScavTrap " << name << " constructed." << std::endl;
}

// Copy constructor
ScavTrap::ScavTrap(ScavTrap const &copy) : ClapTrap(copy)
{
	*this = copy;
	std::cout << "ScavTrap " << this->get_name() << " copied." << std::endl;
}

// Destructor
ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->get_name() << " destroyed." << std::endl;
}

// Assignment operator
ScavTrap &ScavTrap::operator=(ScavTrap const &copy)
{
	std::cout << "ScavTrap assignment operator called." << std::endl;
	ClapTrap::operator=(copy);
	return (*this);
}

// Override attack method
void ScavTrap::attack(std::string const &target)
{
	if (this->get_energy_points() && this->get_hit_points() > 0)
	{
		std::cout << "ScavTrap " << this->get_name() << " viciously attacks " << target << ", dealing " << this->get_damage() << " damage!" << std::endl;
		this->set_energy_points(this->get_energy_points() - 1);
	}
	else if (this->get_hit_points() <= 0)
		std::cout << "ScavTrap " << this->get_name() << " is too dead to attack." << std::endl;
	else
		std::cout << "🪫 ScavTrap " << this->get_name() << " is out of energy!" << std::endl;
}

// Unique method
void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->get_name() << " is now in Gate Keeper mode 🛡️" << std::endl;
}
