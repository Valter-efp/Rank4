/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 18:36:23 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/21 14:04:02 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdlib.h>
#include <limits>

/// @brief Zombie class
class Zombie
{
	private:
		/// @brief Zombie name
		std::string	_name;
		
	public:
		/// @brief Initializes zombies
		/// @param  name  Zombie name
		void	initialise( std::string );
		
		/// @brief Method to announce the zombie
		void	announce( void );

		/// @brief Zombie destructor
		/// The zombies are beeing created with "new", so there shouldnt be a need to use the destructor.
		/// I'm using it to display the destruction message automatically when calling delete on the zombie class-
		~Zombie ( void );
};

/// @brief Method to create a zombie horde
/// @param N Number of zombies
/// @param name Name of the zombies
/// @return Ptr to the first zombie in the horde
Zombie *zombieHorde( int N, std::string name );