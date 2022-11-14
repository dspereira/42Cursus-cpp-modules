/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:21:41 by dsilveri          #+#    #+#             */
/*   Updated: 2022/11/14 20:03:17 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	static bool init = 0;
	int			rand_n;

	if (!init)
	{
		srand(time(NULL)); 
		init = 1;
	}
    rand_n = (rand() % 3);
	if (rand_n == 0)
	{
		std::cout << "new A created" << std::endl;
		return (new A);
	}
	else if (rand_n == 1)
	{
		std::cout << "new B created" << std::endl;
		return (new B);
	}
	else
	{
		std::cout << "new C created" << std::endl;
		return (new C);
	}
}

void identify(Base* p)
{
	A *a;
	B *b;
	C *c;
	
	a = dynamic_cast<A*>(p);
	b = dynamic_cast<B*>(p);
	c = dynamic_cast<C*>(p);

	std::cout << "Pointer Cast" << std::endl;
	if (a)
		std::cout << "Object type A" << std::endl;
	else if (b)
		std::cout << "Object type B" << std::endl;
	else if (c)
		std::cout << "Object type C" << std::endl;
}


void identify(Base& p)
{
	A a;
	B b;
	C c;

	std::cout << "Reference Cast" << std::endl;
	try{
		a = dynamic_cast<A&>(p);
		std::cout << "Object type A" << std::endl;
	}
	catch (std::exception & e){}
	try{
		b = dynamic_cast<B&>(p);
		std::cout << "Object type B" << std::endl;
	}
	catch (std::exception & e){}
	try{
		c = dynamic_cast<C&>(p);
		std::cout << "Object type C" << std::endl;
	}
	catch (std::exception & e){}
}


int main(void)
{
	Base *obj;

	for (int i = 0; i < 5; i++)
	{
		std::cout << std::endl;
		obj = generate();
		identify(obj);
		delete obj;
	}

	for (int i = 0; i < 5; i++)
	{
		std::cout << std::endl;
		obj = generate();
		identify(*obj);
		delete obj;
	}
	return (0);
}
