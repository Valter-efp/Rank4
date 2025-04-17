/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 15:55:22 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/06 16:38:44 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
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

	private:
		int					_fp_value;
		static const int	_fract_bits;

};

#endif