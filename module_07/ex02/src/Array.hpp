/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 11:12:06 by dsilveri          #+#    #+#             */
/*   Updated: 2022/11/24 15:48:31 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

template<typename T>
class Array
{
	private:
	unsigned int	_size;
	T				*arr;

	public:
	Array(): _size(0), arr(new T[0]) {}

	Array(unsigned int size):_size(size), arr(new T[size]) {}

	Array(const Array& other): _size(other._size), arr(new T[_size])
	{
		for(unsigned int i = 0; i < _size; i++)
			arr[i] = other.arr[i];
	}

	~Array()
	{
		delete[] arr;
	}

	Array& operator=(const Array& other)
	{
		if (this != &other)
		{
			delete[] arr;
			_size = other._size;
			arr = new T[_size];
			for(unsigned int i = 0; i < _size; i++)
				arr[i] = other.arr[i];
		}
		return (*this);
	}

	unsigned int size(void) const
	{
		return(_size);
	} 

	// write
	T& operator[](unsigned int idx)
	{
		if (idx < _size)
			return (arr[idx]);
		else 
			throw std::exception();
	}

	// read
    const T& operator[](unsigned int idx) const 
	{ 
		if (idx < _size)
			return (arr[idx]);
		else 
			throw std::exception();
	}
};

#endif
