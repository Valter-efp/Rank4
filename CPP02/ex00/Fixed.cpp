/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 15:54:15 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/21 17:40:30 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes/Fixed.hpp"

const int Fixed::_fract_bits = 8;

/// Default constructor
Fixed::Fixed(): _fp_value(0) //Sets the raw _fp_value to 0 == 0.0
{
	std::cout << "Default Constructor called" << std::endl;
}

/// @brief Copy constructor
/// @details copy Reference to the Fixed object to copy from
Fixed::Fixed(const Fixed &copy) : _fp_value(copy._fp_value)
{
	std::cout << "Copy Constructor called" << std::endl;
}

/// Default deconstructor
Fixed::~Fixed()
{
	std::cout << "Deconstructor called" << std::endl;
}

/// @brief Copy assignment operator
/// @param src Source Fixed object
/// @return this object
/// This is a reserved pointer that points to the current object
/// Ensures we don't copy the object by assigning to itself
/// This constructwor is called when a new object is created as a copy of an existing object
Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &src)
		this->_fp_value = src.getRawBits();

	return (*this);
}

/// @brief Returns the raw fixed-point value
/// @return The integer representing the raw fixed-point value
	int	Fixed::getRawBits(void)const
	{
		std::cout << "getRawBits member function called" << std::endl;
		return (this->_fp_value);
	}

/// @brief Sets the raw fixed-point value
/// @param raw The raw value to set
	void	Fixed::setRawBits(int const raw)
	{
		std::cout << "setRawBits member function called" << std::endl;
		this->_fp_value = raw;
	}