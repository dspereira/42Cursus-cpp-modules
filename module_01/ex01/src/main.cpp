/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsilveri <dsilveri@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:08:53 by dsilveri          #+#    #+#             */
/*   Updated: 2022/09/20 16:13:58 by dsilveri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main (void)
{
	Zombie *z;
	int n_zombies;

	n_zombies = 5;
	z = zombieHorde(n_zombies, "Zombies");
	for(int i = 0; i < n_zombies; i++){
		z[i].announce();
	}
	delete[] z;
	return (0);
}
