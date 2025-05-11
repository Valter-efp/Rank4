/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 15:55:22 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/21 17:07:19 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed
{
	private:
		int					_fp_value; // Will store the int that represent the fixe_point number
		static const int	_fract_bits; // Will store the number of bits used for the fractional part (will alays be 8)

	public:
		Fixed();
		
		/// @brief Copy constructor
		Fixed(const Fixed& copy);
		
		~Fixed();
		
		/// @brief Overload the assignment operator
		Fixed &operator=(const Fixed &src);
		
		/// @brief Getter to get the value of the fixed-point number
		int getRawBits(void)const;
		
		/// @brief Setter to set the value of the fixed-point number
		void setRawBits(int const raw);
};