/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeCast.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:59:56 by dsilveri          #+#    #+#             */
/*   Updated: 2022/11/12 20:47:12 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPE_CAST_H
#define TYPE_CAST_H

#include <iostream>
#include <iomanip>

#define MAX_INT 2147483647
#define MIN_INT -2147483647

class TypeCast
{
	private:
		char		typeChar;
		int			typeInt;
		float		typeFloat;
		double		typeDouble;
		long int	controlOverflow;
		void 		printDataImpossible(void) const;
		
	public:
		TypeCast();
		TypeCast(char n);
		TypeCast(int n);
		TypeCast(float n);
		TypeCast(double n);
		TypeCast(const TypeCast& other);
		~TypeCast();
		TypeCast& operator=(const TypeCast& other);
		void setValue(char n);
		void setValue(int n);
		void setValue(float n);
		void setValue(double n);
		void setControlOverflow(long int n);
		char getTypeChar(void) const;
		int getTypeInt(void) const;
		float getTypeFloat(void) const;
		double getTypeDouble(void) const;
		void printData(void) const;
};

#endif