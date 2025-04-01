/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 17:42:43 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/01 17:56:57 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <stdlib.h>

class Zombie
{

	public:
		void	announce( void );
		Zombie ( std::string name );
		~Zombie ( void );
	
	private:
		std::string	_name;
};

Zombie	*newZombie( std::string name );
void	randomChump( std::string name );

#endif