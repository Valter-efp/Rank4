/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human_B.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 19:50:06 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/01 19:52:59 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "./Violence.hpp"

class HumanB
{
	public:
		HumanB( std::string name );
		void	attack( void );
		void	setWeapon( Weapon &weapon );

	private:
		Weapon		*_weapon;
		std::string	_name;
	
};

#endif