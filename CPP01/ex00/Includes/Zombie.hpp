/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 17:42:43 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/17 13:39:50 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdlib.h>

class Zombie
{
	private:
		std::string	_name;
		
	public:
		// Constructors
		Zombie ( std::string name );
		// Deconstructors
		~Zombie ( void );

		//Methods:
		// Anounce a zombie.
		void	announce( void );
};

// Utility functions to operate the Zombie class:
// Creates a zombie on the heap;
// Creeates a zombie on the stack.
Zombie	*newZombie( std::string name );
void	randomChump( std::string name );