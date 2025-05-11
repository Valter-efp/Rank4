/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 19:50:42 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/21 14:34:10 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./Violence.hpp"

class Weapon
{
	private:
		std::string	_type; // The type of weapon

	public:
		// Constructors
		Weapon( std::string type );

		// Getter (Retruns a reference to the type of weapon)
		const std::string	&getType( void );

		// Setter
		void				setType( std::string type );	
};