/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:17:46 by dsilveri          #+#    #+#             */
/*   Updated: 2022/10/27 17:22:08 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
    const Animal* meta = new Animal();
    std::cout << std::endl;
    const Animal* j = new Dog();
    std::cout << std::endl;
    const Animal* i = new Cat();
    std::cout << std::endl;
    const WrongAnimal* wAnimal = new WrongAnimal();
    std::cout << std::endl;
    const WrongAnimal* wCat = new WrongCat();
    std::cout << std::endl;

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << wAnimal->getType() << " " << std::endl;
    std::cout << wCat->getType() << " " << std::endl;
    std::cout << std::endl;

    i->makeSound();
    j->makeSound();
    meta->makeSound();
    wCat->makeSound();
    wAnimal->makeSound();

    std::cout << std::endl;
    delete meta;
    std::cout << std::endl;
    delete j;
    std::cout << std::endl;
    delete i;
    std::cout << std::endl;
    delete wCat;
    std::cout << std::endl;
    delete wAnimal;
    return (0);
}
