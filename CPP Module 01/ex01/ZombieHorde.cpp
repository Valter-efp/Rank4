/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 18:38:04 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/01 19:22:05 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Includes/Zombie.hpp"

/// @brief Method to create a zombie horde
/// @param N  Number of zombies
/// @param name Name of the zombies
/// @return Ptr to the first zombie in the horde
Zombie *zombieHorde( int N, std::string name )
{
	Zombie	*zombies;	//Ptr to hold the array of zombies

	/// Allocate memory for the zombies with "new"
	/// If the allocation fails, print an error message and exit
	zombies = new (std::nothrow) Zombie[N];
	if (zombies == NULL)
	{
		std::cout << "Error: Mem alloc failed!" << std::endl;
		exit(1);
	}

	/// Initialise the zombies in the horde
	for (int i = 0; i < N; i++)
		zombies[i].initialise(name);
	
	/// Return the ptr to the first zombie in the horde
	return (zombies);
}