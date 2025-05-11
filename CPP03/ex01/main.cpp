/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 13:36:39 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/24 18:14:21 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Includes/ClapTrap.hpp"
#include "./Includes/ScavTrap.hpp"

void print_status(const ClapTrap &bot)
{
	std::cout << "\n====   STATUS    ===="	<< std::endl;
	std::cout << "Name:   "					<< bot.get_name() << std::endl;
	std::cout << "💖 HP:     "				<< bot.get_hit_points() << std::endl;
	std::cout << "⚡ Energy: "				<< bot.get_energy_points() << std::endl;
	std::cout << "🗡️  Damage: "			 << bot.get_damage() << std::endl;
	std::cout << "=====================\n"	<< std::endl;
}

void scav_demo()
{
	std::cout << "\n--- ScavTrap Demo ---\n";

	ScavTrap guard("Cerebrus");
	print_status(guard);
	guard.attack("Bad Guy");
	guard.guardGate();

	ScavTrap clone(guard);
	print_status(clone);
	clone.takeDamage(5);
	print_status(clone);
	clone.attack("Another Bad Guy");
	print_status(clone);
	clone.beRepaired(5);
	print_status(clone);
	
	std::cout << "--- End of ScavTrap Demo ---\n";
}

int main()
{
	scav_demo();
	return 0;
}
