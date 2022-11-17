/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 11:12:06 by dsilveri          #+#    #+#             */
/*   Updated: 2022/11/17 13:00:18 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template<typename T>
class Array
{
	private:
	T	*arr;
	int	size;

	public:
	Array(): arr(new T()), size(0)
	{
		arr[0] = 0;
	}

	Array(int n): arr(new T[n]), size(n)
	{	
		//arr = new T[n];
		for(int i = 0; i < n; i++)
			arr[i] = 0;
	}

	Array(const Array& other)
	{
		size = other.size;
		arr = new T[size];
		for(int i = 0; i < size; i++)
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
			size = other.size;
			arr = new T[size];
			for(int i = 0; i < size; i++)
				arr[i] = other.arr[i];
		}
		return (*this);
	}
	T& operator[](int n)
	{
		if (n >= 0 && n < size)
			return (arr[n]);
		else 
			throw std::exception();
	}
};

#endif
