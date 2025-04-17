/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 18:36:59 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/17 14:09:35 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Includes/Zombie.hpp"

int	main(void)
{
	Zombie	*heap_zombie;				//Ptr to the dinamically allocated zombie horde
	int		n;							//Number of zombies

	n = 2;
	heap_zombie = zombieHorde(n, "Foo");//Create a zombie horde with x zombies named "Foo"

	std::cout << "🧟🧟The zombie horde is gorwing:🧟🧟" << std::endl;
	
	///Print the zombies in the horde
	for (int i = 0; i < n; i++)
	{
		std::cout << "🧟 nº " << i << "| ";
		heap_zombie[i].announce();
	}

	std::cout << std::endl << "💥 The zombies are hit by a grenade! 💥" << std::endl;
	
	///Free the memory allocated to the zombies in the horde
	delete[] heap_zombie;
}