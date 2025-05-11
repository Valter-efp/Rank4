/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 13:36:39 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/23 13:45:05 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Includes/ClapTrap.hpp"

void print_status(const ClapTrap &bot)
{
	std::cout << "\n====   STATUS    ===="	<< std::endl;
	std::cout << "Name:   "					<< bot.get_name() << std::endl;
	std::cout << "💖 HP:     "				<< bot.get_hit_points() << std::endl;
	std::cout << "⚡ Energy: "				<< bot.get_energy_points() << std::endl;
	std::cout << "🗡️  Damage: "			 << bot.get_damage() << std::endl;
	std::cout << "=====================\n"	<< std::endl;
}

void run_attack_phase(ClapTrap &bot, const std::string targets[], int num_turns)
{
	std::cout << "\n--- [Auto] Attack Phase ---\n";
	for (int i = 0; i < num_turns && bot.get_energy_points() > 0 && bot.get_hit_points() > 0; ++i)
		bot.attack(targets[i % 12]);
}

void run_damage_phase(ClapTrap &bot, int num_turns)
{
	std::cout << "\n--- [Auto] Damage Phase ---\n";

	for (int i = 0; i < num_turns && bot.get_hit_points() > 0; ++i)
	{
		std::cout << "⚠️  Took " << (i + 1) << " damage!\n";
		bot.takeDamage(i + 1);

		if (bot.get_hit_points() == 0)
		{
			std::cout << "💀 ClapTrap " << bot.get_name() << " has died due to HP reaching 0!\n";
			break;
		}
	}
}

void run_healing_phase(ClapTrap &bot, int num_turns)
{
	std::cout << "\n--- [Auto] Healing Phase ---\n";

	if (bot.get_hit_points() == 0)
	{
		std::cout << "🛠️  Bot is dead. Reviving with 1 HP for healing demo...\n";
		bot.set_hit_points(1);
	}

	bot.set_energy_points(10);

	for (int i = 0; i < num_turns && bot.get_energy_points() > 0 && bot.get_hit_points() > 0; ++i)
		bot.beRepaired(2);
}

void auto_mode()
{
	ClapTrap bot("AutoBot");
	std::string targets[] =
	{
		"IronMan", "CaptainAmerica", "Thor", "Hulk", "BlackWidow",
		"Hawkeye", "SpiderMan", "DoctorStrange", "BlackPanther",
		"ScarletWitch", "Vision", "AntMan"
	};

	run_attack_phase(bot, targets, 10);
	run_damage_phase(bot, 10);
	run_healing_phase(bot, 5);

	std::cout << "\n>> Auto Mode Complete <<\n";
}

void run_attack_phase_manual(ClapTrap &bot, const std::string targets[], int num_turns)
{
	std::string input;
	std::cout << "\n--- [Manual] Attack Phase ---\n";
	for (int i = 0; i < num_turns && bot.get_energy_points() > 0 && bot.get_hit_points() > 0; ++i)
	{
		std::cout << "Attack Turn " << (i+1) << " > Press [Enter] or 'q' to quit: ";
		std::getline(std::cin, input);
		if (input == "q") return;

		bot.attack(targets[i % 12]);
		print_status(bot);
	}
}

void run_damage_phase_manual(ClapTrap &bot, int num_turns)
{
	std::string input;
	std::cout << "\n--- [Manual] Damage Phase ---\n";
	for (int i = 0; i < num_turns && bot.get_hit_points() > 0; ++i)
	{
		std::cout << "Damage Turn " << (i+1) << " > Press [Enter] or 'q' to quit: ";
		std::getline(std::cin, input);
		if (input == "q") return;

		int dmg = (i % 5) + 1;
		std::cout << "⚠️  Took " << dmg << " damage!\n";
		bot.takeDamage(dmg);
		print_status(bot);
		if (bot.get_hit_points() == 0)
		{
			std::cout << "💀 ClapTrap " << bot.get_name() << " has died due to HP reaching 0!\n";
			break;
		}
	}
}

void run_healing_phase_manual(ClapTrap &bot, int num_turns)
{
	std::string input;
	std::cout << "\n--- [Manual] Healing Phase ---\n";

	if (bot.get_hit_points() == 0)
	{
		std::cout << "🛠️  Bot is dead. Reviving with 1 HP...\n";
		bot.set_hit_points(1);
	}

	bot.set_energy_points(10);

	for (int i = 0; i < num_turns && bot.get_energy_points() > 0 && bot.get_hit_points() > 0; ++i)
	{
		std::cout << "Healing Turn " << (i+1) << " > Press [Enter] or 'q' to quit: ";
		std::getline(std::cin, input);
		if (input == "q") return;

		bot.beRepaired(2);
		print_status(bot);
	}
}

void manual_mode()
{
	ClapTrap bot("ManualBot");
	std::string targets[] =
	{
		"IronMan", "CaptainAmerica", "Thor", "Hulk", "BlackWidow",
		"Hawkeye", "SpiderMan", "DoctorStrange", "BlackPanther",
		"ScarletWitch", "Vision", "AntMan"
	};

	run_attack_phase_manual(bot, targets, 10);
	run_damage_phase_manual(bot, 10);
	run_healing_phase_manual(bot, 5);

	std::cout << "\n>> Manual Mode Complete <<\n";
}


int main()
{
	std::string mode;
	std::cout << "Welcome to ClapTrap Simulation!\n";
	std::cout << "Choose a mode (auto/manual): ";
	std::getline(std::cin, mode);

	if (mode == "auto")
	{
		std::cout << "\n>> AUTO MODE STARTED <<\n" << std::endl;
		auto_mode();
	}
	else if (mode == "manual")
	{
		std::cout << "\n>> MANUAL MODE STARTED <<\n" << std::endl;
		manual_mode();
	}
	else
	{
		std::cout << "Invalid input! Exiting Simulation.\n";
		return (1);
	}
	return (0);
}
