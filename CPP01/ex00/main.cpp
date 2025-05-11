/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 17:43:28 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/17 13:50:34 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Includes/Zombie.hpp"

int	main(void)
{
	Zombie	*heap_zombie;
	
	heap_zombie = newZombie("RandomFoo"); // allocate memory
	heap_zombie->announce();
	randomChump("NewFoo"); //The zombie gets created and destroyed since not beeing used.
	delete heap_zombie; // deallocate the memory
}