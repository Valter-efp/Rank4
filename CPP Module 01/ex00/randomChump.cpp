/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 17:44:40 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/01 18:13:12 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Includes/Zombie.hpp"

/// @brief Creates the class on the stack
/// After the calss gets out of scope, the destructor
/// is called automatically
/// @param name 
void	randomChump( std::string name )
{
	Zombie	zombie (name);

	zombie.announce();
}