/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:24:36 by dsilveri          #+#    #+#             */
/*   Updated: 2022/09/27 14:25:11 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIDEX_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int fixedPointNum;
		static const int FRACTIONAL_BITS = 8;

	public:
		Fixed(void);
		Fixed(const int num);
		Fixed(const float num);
		Fixed(const Fixed& other);
		~Fixed(void);
		void operator=(const Fixed& other);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;	
};

std::ostream& operator<<(std::ostream& stream, const Fixed& other);

#endif