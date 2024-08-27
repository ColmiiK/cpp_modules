/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:50:34 by alvega-g          #+#    #+#             */
/*   Updated: 2024/07/02 13:31:38 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>
#include <WrongAnimal.hpp>
#include <Dog.hpp>
#include <Cat.hpp>
#include <WrongCat.hpp>

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	// Dog basic;
	// {
	// 	Dog tmp = basic;
	// 	std::cout << "end of scope\n" << std::endl;
	// }
	
	
	delete j;
	delete i;
	
	Animal* array[100];
	for (int i = 0; i < 50; i++) {
		std::cout << "\n" << i << std::endl;
		array[i] = new Dog();
	}
	for (int i = 50; i < 100; i++) {
		std::cout << "\n" << i << std::endl;
		array[i] = new Cat();
	}

	for (int i = 0; i < 100; i++) {
		delete array[i];
	}
	return (0);
}
