/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:12:40 by dsilveri          #+#    #+#             */
/*   Updated: 2022/11/16 17:12:58 by dsilveri         ###   ########.fr       */
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

	swap<int>(a, b);
	std::cout << "INT" << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << max<int>(a, b) << std::endl;
	std::cout << min<int>(a, b) << std::endl;
	std::cout << std::endl;

	swap<float>(a1, b1);
	std::cout << "FLOAT" << std::endl;
	std::cout << a1 << std::endl;
	std::cout << b1 << std::endl;
	std::cout << max<float>(a1, b1) << std::endl;
	std::cout << min<float>(a1, b1) << std::endl;
}

int main(void) 
{
	int a = 2;
	int b = 3;

	//tests();
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
	return 0;
}
