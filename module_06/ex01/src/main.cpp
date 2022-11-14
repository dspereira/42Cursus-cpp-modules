/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:54:44 by dsilveri          #+#    #+#             */
/*   Updated: 2022/11/14 16:01:05 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stdint.h>

struct Data
{
	std::string	name;
	std::string	occupation;
	int			age;
};

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int main(void)
{
	Data data;
	Data *ptr;
	uintptr_t raw;

	data.name = "John";
	data.occupation = "Software Developer";
	data.age = 30;

	raw = serialize(&data);
	ptr = deserialize(raw);

	std::cout << "pointer comparison" << std::endl;
	std::cout << &data << std::endl;
	std::cout << ptr << std::endl;
	std::cout << std::endl;
	std::cout << "before serialization" << std::endl;
	std::cout << data.name << std::endl;
	std::cout << data.occupation << std::endl;
	std::cout << data.age << std::endl;
	std::cout << std::endl;
	std::cout << "after serialization" << std::endl;
	std::cout << ptr->name << std::endl;
	std::cout << ptr->occupation << std::endl;
	std::cout << ptr->age << std::endl;

	return (0);
}