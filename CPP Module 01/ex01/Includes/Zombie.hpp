/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 18:36:23 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/01 19:15:13 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <stdlib.h>

/// @brief Zombie class
class Zombie
{

	public:
		/// @brief Zombie constructor
		/// @param  name  Zombie name
		void	initialise( std::string );
		
		/// @brief Method to announce the zombie
		void	announce( void );

		/// @brief Zombie destructor
		~Zombie ( void );
	
	private:
		/// @brief Zombie name
		std::string	_name;
};

/// @brief Method to create a zombie horde
/// @param N Number of zombies
/// @param name Name of the zombies
/// @return Ptr to the first zombie in the horde
Zombie *zombieHorde( int N, std::string name );

#endif