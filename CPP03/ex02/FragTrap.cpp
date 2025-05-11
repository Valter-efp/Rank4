/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 15:56:42 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/23 15:59:27 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Includes/FragTrap.hpp"

// Default constructor
FragTrap::FragTrap(void) : ClapTrap("default")
{
	this->set_hit_points(100);
	this->set_energy_points(100);
	this->set_damage(30);
	std::cout << "FragTrap Default constructor called." << std::endl;
}

// Parameterized constructor
FragTrap::FragTrap(std::string const &name) : ClapTrap(name)
{
	this->set_hit_points(100);
	this->set_energy_points(100);
	this->set_damage(30);
	std::cout << "FragTrap " << name << " constructed." << std::endl;
}

// Copy constructor
FragTrap::FragTrap(FragTrap const &copy) : ClapTrap(copy)
{
	*this = copy; // Assign values
	std::cout << "FragTrap " << this->get_name() << " copied." << std::endl;
}

// Destructor
FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->get_name() << " destroyed." << std::endl;
}

// Assignment operator
FragTrap &FragTrap::operator=(FragTrap const &copy)
{
	std::cout << "FragTrap assignment operator called." << std::endl;
	ClapTrap::operator=(copy); // Call ClapTrap's assignment operator
	return *this;
}

// Special function
void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->get_name() << " is requesting a HIGH FIVE! ✋" << std::endl;
}
