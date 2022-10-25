/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:01:31 by dsilveri          #+#    #+#             */
/*   Updated: 2022/10/25 16:53:05 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed calcTriArea(const Point& v1, const Point& v2, const Point& v3)
{
	Fixed det;
	Fixed area;

	det = ((v1.getX() - v3.getX()) * (v2.getY() - v3.getY())) - ((v2.getX() - v3.getX()) * (v1.getY() - v3.getY()));
	area = det / 2;
	if (area < 0)
		area = area * -1;
	return (area);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed totalArea;
	Fixed a1, a2, a3;
	
	totalArea = calcTriArea(a, b, c);
	a1 = calcTriArea(point, a, b);
	a2 = calcTriArea(point, b, c);
	a3 = calcTriArea(point, c, a);
	
	if (a1 == 0 || a2 == 0 || a3 == 0)
		return (false);
	return ((a1 + a2 + a3) == totalArea);
}
