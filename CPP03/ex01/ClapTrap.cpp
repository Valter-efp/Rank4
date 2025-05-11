/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 13:36:30 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/23 13:36:31 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Includes/ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("default"), _hit_points(10), _energy_points(10), _damage(0)
{
	std::cout << "ClapTrap " << this->_name << " Default constructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string const &name): _name(name), _hit_points(10), _energy_points(10), _damage(0)
{
	std::cout << "ClapTrap " << this->_name << " created." << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->_name << " Default destructor called." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	std::cout << "ClapTrap " << this->_name << " copied." << std::endl;
	*this = copy;
}

void	ClapTrap::attack(std::string const &target)
{
	if (this->_energy_points && this->_hit_points > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacked " << target << ", causing " << this->_damage << " points of damage!" << std::endl;
		this->_energy_points--;
	}
	if (this->_hit_points <= 0)
		std::cout << "ClapTrap " << this->_name << " is dead!" << std::endl;
	else if (!this->_energy_points)
		std::cout << "🪫 ClapTrap " << this->_name << " is out of energy points!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points > 0)
	{
		std::cout << "ClapTrap " << this->_name << " took " << amount << " points of damage!" << std::endl;
		this->_hit_points -= amount;
	}
	else
		std::cout << "ClapTrap " << this->_name << " is already died, he can't take it anymore!" << std::endl;
	if (this->_hit_points < 0)
		this->_hit_points = 0;

}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_points > 0 && this->_energy_points)
	{
		std::cout << "ClapTrap " << this->_name << " healed " << amount << " points." << std::endl;
		this->_hit_points += amount;
		this->_energy_points--;
	}
	if (this->_hit_points <= 0)
		std::cout << "Cannot repair ClapTrap : " << this->_name << "because he already died." << std::endl;
	else if (!this->_energy_points)
		std::cout << "ClapTrap " << this->_name << " doesn't have more energy points." << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &copy)
{
	std::cout << "Assignment operator for ClapTrap called." << std::endl;
	this->_name = copy.get_name();
	this->_hit_points = copy.get_hit_points();
	this->_energy_points = copy.get_energy_points();
	this->_damage = copy.get_damage();
	return (*this);
}

std::string const	&ClapTrap::get_name(void) const
{
	return (this->_name);
}

int const	&ClapTrap::get_hit_points(void) const
{
	return (this->_hit_points);
}

int const	&ClapTrap::get_energy_points(void) const
{
	return (this->_energy_points);
}

int const	&ClapTrap::get_damage(void) const
{
	return (this->_damage);
}

void	ClapTrap::set_name(std::string const &name)
{
	this->_name = name;
}

void	ClapTrap::set_hit_points(int const &value)
{
	this->_hit_points = value;
}

void	ClapTrap::set_energy_points(int const &value)
{
	this->_energy_points = value;
}

void	ClapTrap::set_damage(int const &value)
{
	this->_damage = value;
}