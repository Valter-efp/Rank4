/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 15:56:29 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/24 18:17:54 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	// Canonical Form
	FragTrap(void); // Default constructor
	FragTrap(std::string const &name); // Parameterized constructor
	FragTrap(FragTrap const &copy); // Copy constructor
	~FragTrap(void); // Destructor

	// Overload assignment operator
	FragTrap &operator=(FragTrap const &copy);

	// Special function for FragTrap
	void highFivesGuys(void);
};
