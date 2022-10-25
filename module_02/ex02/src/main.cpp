/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:23:38 by dsilveri          #+#    #+#             */
/*   Updated: 2022/10/25 15:49:09 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"


void tests(float n1, float n2)
{
	/*Fixed fixed1 = 1.5f;
	Fixed fixed2 = 3.5f;

	float float1 = 1.5f;
	float float2 = 3.5f;*/

	Fixed fixed1 = n1;
	Fixed fixed2 = n2;

	float float1 = n1;
	float float2 = n2;

	std::cout << "fixed + : " << fixed1 + fixed2 << std::endl;
	std::cout << "fixed - : " << fixed1 - fixed2 << std::endl;
	std::cout << "fixed / : " << fixed1 / fixed2 << std::endl;
	std::cout << "fixed * : " << fixed1 * fixed2 << std::endl;
	std::cout << "fixed > : " << (fixed1 > fixed2) << std::endl;
	std::cout << "fixed < : " << (fixed1 < fixed2) << std::endl;
	std::cout << "fixed >=: " << (fixed1 >= fixed2) << std::endl;
	std::cout << "fixed <=: " << (fixed1 <= fixed2) << std::endl;
	std::cout << "fixed ==: " << (fixed1 == fixed2) << std::endl;
	std::cout << "fixed !=: " << (fixed1 != fixed2) << std::endl;

	std::cout << std::endl;

	std::cout << "float + : " << float1 + float2 << std::endl;
	std::cout << "float - : " << float1 - float2 << std::endl;
	std::cout << "float / : " << float1 / float2 << std::endl;
	std::cout << "float * : " << float1 * float2 << std::endl;
	std::cout << "float > : " << (float1 > float2) << std::endl;
	std::cout << "float < : " << (float1 < float2) << std::endl;
	std::cout << "float >=: " << (float1 >= float2) << std::endl;
	std::cout << "float <=: " << (float1 <= float2) << std::endl;
	std::cout << "float ==: " << (float1 == float2) << std::endl;
	std::cout << "float !=: " << (float1 != float2) << std::endl;

	std::cout << "fixed max: " << Fixed::max(fixed1, fixed2) << std::endl;
	std::cout << "fixed min: " << Fixed::min(fixed1, fixed2) << std::endl;
}

int main(void)
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	/*
	tests(1.5f, 3.5f);
	std::cout << std::endl;
	tests(156.458f, 156.458f);
	std::cout << std::endl;
	tests(10.24f, 3.5f);
	*/
	
	return (0);
}
