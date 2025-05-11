/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 17:57:46 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/23 18:31:57 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes/Animal.hpp"
#include "Includes/Dog.hpp"
#include "Includes/Cat.hpp"
#include "Includes/WrongAnimal.hpp"
#include "Includes/WrongCat.hpp"

int main()
{
	std::cout << std::endl << "🐾--- Animal tests ---🐾" << std::endl;
	const Animal *meta = new Animal();	// Ptr to animal class
	const Animal *j = new Dog();		// Ptr to dog class, but stored as an animal
	const Animal *i = new Cat();		// Ptr to cat class ,but stored as an animal

	std::cout << std::endl << "🐶 Dog getType: " << j->getType() << " " << std::endl;
	std::cout << "🐱 Cat getType: " << i->getType() << " " << std::endl << std:: endl;

	std::cout << "🐱 Cat makeSound: ";
	i->makeSound();
	std::cout << "🐶 Dog makeSound: ";
	j->makeSound();
	std::cout << "🐾 Animal makeSound: ";
	meta->makeSound();
	std::cout << std::endl;

	delete meta;
	delete j;
	delete i;

	std::cout << std:: endl << "🚫--- WrongAnimal tests ---🚫" << std::endl;;
	const WrongAnimal *wrong = new WrongAnimal();
	const WrongAnimal *wrongCat = new WrongCat();

	std::cout << std::endl << "❌ WrongAnimal getType: " << wrong->getType() << " " << std::endl;
	std::cout << "❌ WrongCat getType: " << wrongCat->getType() << " " << std::endl << std::endl;
	
	std::cout << "❌ WrongCat makeSound: ";
	wrongCat->makeSound(); // Will NOT call WrongCat::makeSound() cause no virtual
	std::cout << "❌ WrongAnimal makeSound: ";
	wrong->makeSound();
	std::cout << std::endl;
	
	delete wrong;
	delete wrongCat;

	return 0;
}