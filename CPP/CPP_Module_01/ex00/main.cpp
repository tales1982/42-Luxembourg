/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:54:51 by tlima-de          #+#    #+#             */
/*   Updated: 2024/11/22 20:14:49 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *newZombie1;
	
	newZombie1 = newZombie("New Zombie");
	newZombie1->announce();
	randomChump("Random Zombie");
	delete newZombie1;
	return (0);
}