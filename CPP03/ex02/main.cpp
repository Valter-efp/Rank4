/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 13:36:39 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/24 18:26:44 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Includes/ClapTrap.hpp"
#include "./Includes/FragTrap.hpp"

void print_status(const ClapTrap &bot)
{
	std::cout << "\n====   STATUS    ===="	<< std::endl;
	std::cout << "Name:   "					<< bot.get_name() << std::endl;
	std::cout << "💖 HP:     "				<< bot.get_hit_points() << std::endl;
	std::cout << "⚡ Energy: "				<< bot.get_energy_points() << std::endl;
	std::cout << "🗡️  Damage: "			 << bot.get_damage() << std::endl;
	std::cout << "=====================\n"	<< std::endl;
}

void frag_demo()
{
	std::cout << "\n--- FragTrap Demo ---\n";
	FragTrap fraggy("Fraggy");

	print_status(fraggy);
	
	fraggy.attack("EvilBot");
	std::cout << "EvilBot strikes back and deals 35 damage to Fraggy!" << std::endl;
	fraggy.takeDamage(35);
	print_status(fraggy);

	fraggy.attack("EvilBot");
	std::cout << "EvilBot is destroyed!" << std::endl;
	print_status(fraggy);

	fraggy.beRepaired(40);
	print_status(fraggy);

	fraggy.highFivesGuys();

	std::cout << "--- End of FragTrap Demo ---\n";
}

int main()
{
	frag_demo();
	return 0;
}