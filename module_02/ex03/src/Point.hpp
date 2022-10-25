/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 13:17:52 by dsilveri          #+#    #+#             */
/*   Updated: 2022/10/25 16:01:52 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PPOINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		Fixed x;
		Fixed y;	

	public:
		Point(void);
		Point(float x, float y);
		Point(const Point& other);
		~Point(void);
		Point& operator=(const Point& other);
		Fixed getX(void) const;
		Fixed getY(void) const;
		void setX(const Fixed& x);
		void setY(const Fixed& y);
};

std::ostream& operator<<(std::ostream& stream, const Point& other);
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
