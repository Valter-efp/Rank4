/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 17:43:28 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/01 18:12:20 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Includes/Zombie.hpp"

int	main(void)
{
	Zombie	*heap_zombie;

	randomChump("NewFoo");
	heap_zombie = newZombie("RandomFoo"); // allocate memory
	heap_zombie->announce();
	delete heap_zombie; // deallocate the memory
}