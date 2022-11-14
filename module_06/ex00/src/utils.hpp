/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:31:04 by dsilveri          #+#    #+#             */
/*   Updated: 2022/11/14 11:34:40 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
#define UTILS_HPP

#include <string>

int isInt(std::string str);
int isDecimal(std::string str, int size);
int isFloat(std::string str);
int isDouble(std::string str);
int isChar(std::string str);

#endif