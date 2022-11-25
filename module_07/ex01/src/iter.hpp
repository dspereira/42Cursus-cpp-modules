/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:54:49 by dsilveri          #+#    #+#             */
/*   Updated: 2022/11/25 21:38:05 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>

template<typename T>
void iter(T a[], size_t size, void (*f)(T&))
{
	for (size_t i = 0; i < size; i++)
		f(a[i]);
}

template<typename T>
void iter(T a[], size_t size, void (*f)(const T&))
{
	for (size_t i = 0; i < size; i++)
		f(a[i]);
}
#endif