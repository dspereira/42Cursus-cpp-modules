/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:23:38 by dsilveri          #+#    #+#             */
/*   Updated: 2022/10/25 16:39:39 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

int main(void)
{
	Point a(2, 2);
	Point b(6, 2);
	Point c(2, 7);
	Point p[7];

	// out
	p[0] = Point(1.99f, 3);
	// out
	p[1] = Point(10, 100);
	// out
	p[2] = Point(4.40f, 5.20f);
	// in
	p[3] = Point(3.50f, 3.60f);
	// in
	p[4] = Point(2.50f, 6);
	// edge
	p[5] = Point(4, 2);
	// vertex
	p[6] = Point(6, 2);

	for(int i = 0; i < 7; i++)
	{
		if (bsp(a, b, c, p[i]))
			std::cout << p[i] << " -> inside triagle" << std::endl;
		else
			std::cout << p[i] << " -> not inside triagle" << std::endl;
		std::cout << std::endl;
	}
	return (0);
}
