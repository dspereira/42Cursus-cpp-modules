/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:17:46 by dsilveri          #+#    #+#             */
/*   Updated: 2022/10/08 17:32:16 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

#define NUMBER_ANIMALS 4

void test_array(void)
{
    std::cout << std::endl << "###############################" << std::endl;
    std::cout << "TEST LEAKS IN ARRAY OF ANIMALS" << std::endl;
    std::cout  << "###############################" << std::endl << std::endl;
    Animal *animals[NUMBER_ANIMALS];

    for (int i = 0; i < NUMBER_ANIMALS; i++)
    {
        if (i < NUMBER_ANIMALS / 2)
            animals[i] = new Dog;
        else 
            animals[i] = new Cat;
    }
    std::cout << std::endl;
    for (int i = 0; i < NUMBER_ANIMALS; i++)
    {
        delete animals[i];
    }
}

void test_simple_leaks(void)
{
    std::cout << std::endl << "###############################" << std::endl;
    std::cout << "TEST LEAKS" << std::endl;
    std::cout  << "###############################" << std::endl << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << std::endl;
    delete j;
    delete i;
}

void test_copy(void)
{
    std::cout << std::endl << "###############################" << std::endl;
    std::cout << "TEST COPY" << std::endl;
    std::cout  << "###############################" << std::endl << std::endl;

    Dog d1;
    Dog d2(d1);
    Cat c1;
    Cat c2(c1);

    std::cout << std::endl; 
    d1 = d2;
    c1 = c2;
    std::cout << std::endl; 
}

void test_copy_animals(void)
{
    std::cout << std::endl << "###############################" << std::endl;
    std::cout << "TEST COPY CLASS ANIMAL" << std::endl;
    std::cout  << "###############################" << std::endl << std::endl;

    Animal* j = new Dog();
    Animal* i = new Cat();
    std::cout << std::endl;
    *i = *j;
    std::cout << std::endl;
    delete i;
    delete j;

}

int main(void)
{
    Cat cat;
    Dog dog;
    Animal *a1;
    Animal *a2;

    a1 = &cat;
    a2 = &dog;

    std::cout << std::endl;
    a1->makeSound();
    a2->makeSound();
    std::cout << std::endl;

    /*
    test_array();
    test_simple_leaks();
    test_copy();
    test_copy_animals();
    */
    return (0);
}
