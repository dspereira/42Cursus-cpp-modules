/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:12:40 by dsilveri          #+#    #+#             */
/*   Updated: 2022/11/25 11:15:53 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "templates.hpp"

void tests(void)
{
	int a = 10;
	int b = 5;

	float a1 = 10.5f;
	float b1 = 5.6f;

	
	std::cout << "INT" << std::endl;
	std::cout << "a:" << a << "  b:" << b << std::endl;
	std::cout << "max:" << max<int>(a, b) << std::endl;
	std::cout << "min:" << min<int>(a, b) << std::endl;
	swap<int>(a, b);
	std::cout << "swap\na" << a << "  b:" << b << std::endl;
	std::cout << std::endl;

	std::cout << "FLOAT" << std::endl;
	std::cout << "a:" << a1 << " b:" << b1 << std::endl;
	std::cout << "max:" << max<int>(a1, b1) << std::endl;
	std::cout << "min:" << min<int>(a1, b1) << std::endl;
	swap<float>(a1, b1);
	std::cout << "swap\na " << a1 << "  b: " << b1 << std::endl;
	std::cout << std::endl;
}

void test_subject(void)
{
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
}

int main(void) 
{
	//tests();
	test_subject();
	return 0;
}
