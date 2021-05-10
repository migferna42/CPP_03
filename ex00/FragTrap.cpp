/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 20:52:17 by migferna          #+#    #+#             */
/*   Updated: 2021/05/10 07:56:08 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
	:_hit_points(100), _max_hit_points(100), _energy_points(100),
	_max_energy_points(100), _level(1), _name("Marvin"),
	_melee_attack_damage(30), _ranged_attack_damage(20),
	_armor_damage_reduction(5)
{
	std::cout << "Un FR4G_TP avistado" << std::endl;
}

FragTrap::FragTrap(const FragTrap &orig)
{

}

FragTrap::~FragTrap(void)
{
	std::cout << "FR4G-TP abatido, repito, FR4G-TP ha sido abatido" << std::endl;
}
