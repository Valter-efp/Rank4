/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human_A.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 19:48:50 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/01 19:52:48 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "./Violence.hpp"

class HumanA
{
	public:
		HumanA( std::string name, Weapon &weapon ):	_weapon(weapon), _name(name) { };
		void	attack( void );

	private:
		Weapon		&_weapon;
		std::string	_name;
	
};

#endif