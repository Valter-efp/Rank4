/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 18:39:31 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/02 18:51:57 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Includes/Harl.hpp"

int	main(void)
{
	std::string	level;
	Harl	harl;

	level = "debug";
	harl.complain(level);
    std::cout << std::endl;
    
	level = "info";
	harl.complain(level);
    std::cout << std::endl;
    
	level = "warning";
	harl.complain(level);
    std::cout << std::endl;
    
	level = "error";
	harl.complain(level);
    std::cout << std::endl;

	level = "";
	std::cout << "Invalid level: ";
	harl.complain(level);
    std::cout << std::endl;
}