/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 18:39:31 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/21 16:43:53 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Includes/Harl.hpp"

int main()
{
	Harl harl;

	std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR", "INVALID" };

	for (int i = 0; i < 5; i++)
	{
		std::cout << "[" << levels[i] << "]" <<std::endl;
		harl.complain(levels[i]);
		std::cout << std::endl;
	}

	return (0);
}