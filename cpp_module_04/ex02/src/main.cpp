/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:50:34 by alvega-g          #+#    #+#             */
/*   Updated: 2024/07/02 13:35:55 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>
#include <WrongAnimal.hpp>
#include <Dog.hpp>
#include <Cat.hpp>
#include <WrongCat.hpp>

int main()
{
	std::cout << "# CORRECT ANIMALS #\n" << std::endl;
	// const Animal* meta = new Animal();
	const Animal* rightDog = new Dog();
	const Animal* rightCat = new Cat();
	
	std::cout << rightDog->getType() << " " << std::endl;
	std::cout << rightCat->getType() << " " << std::endl;
	rightDog->makeSound(); // will output the dog sound
	rightCat->makeSound(); // will output the cat sound
	// meta->makeSound(); // will output the base animal sound
	
	std::cout << "\n# WRONG ANIMALS #\n" << std::endl;
	const WrongAnimal* wrongAnimal = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();
	std::cout << wrongCat->getType() << " " << std::endl;
	std::cout << wrongAnimal->getType() << " " << std::endl;
	wrongCat->makeSound(); //will output the WRONG cat sound!
	wrongAnimal->makeSound(); //will output the WRONG cat sound!
	
	std::cout << "\n# DESTRUCTORS #\n" << std::endl;

	// delete meta;
	delete rightDog;
	delete rightCat;
	delete wrongCat;
	delete wrongAnimal;
	return 0;
}