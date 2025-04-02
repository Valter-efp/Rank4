/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 19:50:42 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/02 16:08:22 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include "./Violence.hpp"

class Weapon
{
	public:
		Weapon( std::string type );
		const std::string	&getType( void );
		void				setType( std::string type );

	private:
		std::string	_type;
	
};

#endif