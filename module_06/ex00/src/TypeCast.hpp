/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeCast.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:59:56 by dsilveri          #+#    #+#             */
/*   Updated: 2022/11/05 18:10:46 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPE_CAST_H
#define TYPE_CAST_H

class TypeCast
{
	private:
		char	typeChar;
		int		typeInt;
		float	typeFloat;
		double	typeDouble;
		
	public:
		TypeCast();
		TypeCast(char n);
		TypeCast(int n);
		TypeCast(float n);
		TypeCast(double n);
		char getTypeChar(void) const;
		int getTypeInt(void) const;
		float getTypeFloat(void) const;
		double getTypeDouble(void) const;
};

#endif