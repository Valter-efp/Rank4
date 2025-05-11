/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 17:44:12 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/01 19:11:12 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Includes/Zombie.hpp"

/// @brief Creates a "new" class on the heap with "new"
// "notthrow" returns NULL if the allocation fails
// Since it is memory allocation, it is necessary to deallocate it
/// @param name 
/// @return ptr to the created class
Zombie	*newZombie( std::string name )
{
	Zombie	*zombie;

	zombie = new (std::nothrow) Zombie (name);
	if (zombie == NULL)
    {
		std::cout << "Error: Mem alloc failed!" << std::endl;
		exit(1);
	}
	return (zombie);
}