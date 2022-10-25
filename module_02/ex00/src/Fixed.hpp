/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:24:36 by dsilveri          #+#    #+#             */
/*   Updated: 2022/10/25 14:10:31 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIDEX_H
#define FIXED_H

#include <iostream>

class Fixed
{
	private:
		int rawBits;
		static const int FRACTIONAL_BITS = 8;

	public:
		Fixed(void);
		Fixed(const Fixed& other);
		~Fixed(void);
		Fixed& operator=(const Fixed& other);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif