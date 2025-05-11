/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 18:36:59 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/21 14:15:45 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Includes/Zombie.hpp"

int parse_input()
{
	int n;

	std::cout << "Enter the number of zombies in the horde: ";
	if (!(std::cin >> n)) // Check if input fails (non-numeric input or EOF, etc)
	{
		std::cerr << "Invalid input. Please enter a valid number!" << std::endl;
		return (-1);
	}

	if (n <= 0 || n > std::numeric_limits<int>::max())
	{
		std::cerr << "Invalid size for the zombie horde. Try again later!" << std::endl;
		return (-1);
	}
	return (n);
}

int main(void)
{
	Zombie *heap_zombie;

	int n = parse_input();
	if (n == -1)
		return (1);

	heap_zombie = zombieHorde(n, "Foo");

	std::cout << "🧟🧟 The zombie horde is growing: 🧟🧟" << std::endl;
	for (int i = 0; i < n; i++)
	{
		std::cout << "🧟 nº " << i << "| ";
		heap_zombie[i].announce();
	}

	std::cout << std::endl << "💥 The zombies are hit by a grenade! 💥" << std::endl;
	delete[] heap_zombie;
}
