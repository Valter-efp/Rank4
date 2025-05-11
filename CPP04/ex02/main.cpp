/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 17:57:46 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/28 10:24:42 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes/Animal.hpp"
#include "Includes/Dog.hpp"
#include "Includes/Cat.hpp"
#include "Includes/WrongAnimal.hpp"
#include "Includes/WrongCat.hpp"

void createAndTestOriginalAnimals()
{
	std::cout << "\n🧠--- Brain deep copy tests ---🧠\n";

// =============== Dog Routine =============== //
	std::cout << "\n🐶📦 Creating original Dog:\n";
	Dog originalDog;
	originalDog.identify();
	originalDog.getBrain()->setIdea(0, "Bone 🦴");
	std::cout << "💭 Original Dog idea: " << originalDog.getBrain()->getIdea(0) << "\n";
	
	// Copying dog and showing the original dog's idea. Set new idea for the copied dog.
	std::cout << "\n🐶📄 Creating copy of Dog:\n";
	Dog copiedDog = originalDog;
	copiedDog.identify();   
	std::cout << "💭 Copied Dog idea: " << copiedDog.getBrain()->getIdea(0) << "\n";
	copiedDog.getBrain()->setIdea(1, " 'Boné' 🧢");
	std::cout << "Copied dog is thinking about: " << copiedDog.getBrain()->getIdea(1) << "\n";
	std::cout << "💭 Copied Dog ideas: " << copiedDog.getBrain()->getIdea(0) << "; " << copiedDog.getBrain()->getIdea(1) << "\n";
	std::cout << "\n🐶🔊 Original Dog sound: ";
	originalDog.makeSound();
	std::cout << "🐶🔊 Copied Dog sound: ";
	copiedDog.makeSound();

// =============== Cat Routine =============== //
	std::cout << "\n🐱📦 Creating original Cat:\n";
	Cat originalCat;
	originalCat.identify();
	originalCat.getBrain()->setIdea(0, "Mouse 🐁");
	std::cout << "💭 Original Cat idea: " << originalCat.getBrain()->getIdea(0) << "\n";

	// Copying cat and showing the original ct's idea. Set new idea for the copied cat.
	std::cout << "\n🐱📄 Creating copy of Cat:\n";
	Cat copiedCat = originalCat;
	copiedCat.identify();   
	std::cout << "💭 Copied Cat idea: " << copiedCat.getBrain()->getIdea(0) << "\n";
	copiedCat.getBrain()->setIdea(1, "Mouse 🖱️");
	std::cout << "Copied cat is thinking about: " << copiedCat.getBrain()->getIdea(1) << "\n";
	std::cout << "💭 Copied Cat ideas: " << copiedCat.getBrain()->getIdea(0) << "; " << copiedCat.getBrain()->getIdea(1) << "\n";
	
	std::cout << "\n🐱🔊 Original Cat sound: ";
	originalCat.makeSound();
	std::cout << "🐱🔊 Copied Cat sound: ";
	copiedCat.makeSound();
	std::cout << std::endl;
}


void createAndTestAnimalArray()
{
	std::cout << "\n🗃️--- Array Test ---🗃️\n";

	const int size = 3;
	Animal* animals[size];
	int numDogs = size / 2;

	for (int x = 0; x < size; ++x)
	{
		if (x < numDogs)
			animals[x] = new Dog();
		else
			animals[x] = new Cat();
	}

	std::cout << "\n🧹--- Deleting animals array---🧹\n";
	for (int x = 0; x < size; ++x)
		delete animals[x];
}

int main()
{
	createAndTestOriginalAnimals();
	createAndTestAnimalArray();

	return (0);
}
