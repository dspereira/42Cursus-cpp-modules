/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:13:05 by dsilveri          #+#    #+#             */
/*   Updated: 2022/11/16 17:13:11 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_HPP
#define TEMPLATES_HPP

template<typename T>
void swap(T &a, T &b)
{
	T buf;

	buf = a;
	a = b;
	b = buf;
}

template<typename T>
const T& min(const T &a, const T &b)
{
	return (a < b ? a : b);
}

template<typename T>
const T& max(const T &a, const T &b)
{
	return (a > b ? a : b);
}

#endif
