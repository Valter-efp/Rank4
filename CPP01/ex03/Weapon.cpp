/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 16:02:12 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/02 16:09:05 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Includes/Violence.hpp"

Weapon::Weapon( std::string type )
{
	_type = type;
}

const std::string	&Weapon::getType( void )
{
	return (_type);
}

void	Weapon::setType( std::string type )
{
	_type = type;
}
