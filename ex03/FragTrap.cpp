/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 20:52:17 by migferna          #+#    #+#             */
/*   Updated: 2021/05/16 11:05:28 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void )
		:ClapTrap(100, 100, 100, 100, 1, "Default", 30, 20, 5)
{
	std::cout << "Un FR4G-TP avistado" << std::endl;
}

FragTrap::FragTrap( std::string const & name)
		:ClapTrap(100, 100, 100, 100, 1, name, 30, 20, 5)
{
	std::cout << "FR4G-TP " << this->_name << " ha sido avistado" << std::endl;
}

FragTrap::FragTrap( FragTrap const & orig )
{
	std::cout << "Se está clonando un FR4G-TP" << std::endl;
	*this = orig;
}

FragTrap &FragTrap::operator=( const FragTrap & orig )
{
	this->_hit_points = orig._hit_points;
	this->_max_hit_points = orig._hit_points;
	this->_energy_points = orig._hit_points;
	this->_max_energy_points = orig._max_energy_points;
	this->_level = orig._level;
	this->_name = orig._name;
	this->_melee_attack_damage = orig._melee_attack_damage;
	this->_ranged_attack_damage = orig._ranged_attack_damage;
	this->_armor_damage_reduction = orig._armor_damage_reduction;
	return (*this);
}

FragTrap::~FragTrap( void )
{
	std::cout 	<< "FR4G-TP " << this->_name << " abatido"
				<< std::endl;
}

typedef void (FragTrap::* type)( std::string const & target );

void FragTrap::vaulthunter_dot_exe( std::string const & target )
{
	if (this->_energy_points < 25)
	{
		std::cout 	<< "FR4G-TP " << this->_name << " batery low, vuelva a la base de carga "
					<< std::endl;
	}
	else
	{
		type attacks[] = {	&FragTrap::oneShotAttack, &FragTrap::laserAttack,
							&FragTrap::torgueAttack, &FragTrap::wizardAttack,
							&FragTrap::boxAttack };
		(this->*attacks[rand() % 5])(target);	
		this->_energy_points -= 25;
	}
}

void FragTrap::oneShotAttack( std::string const & target )
{
	std::cout 	<< "FR4G-TP " << this->_name << " ataca a "
				<< target << " de un solo disparo" << std::endl;
}

void FragTrap::laserAttack( std::string const & target )
{
	std::cout 	<< "FR4G-TP " << this->_name << " apunta con su laser a "
	   			<< target << std::endl;	
}

void FragTrap::torgueAttack( std::string const & target )
{
	std::cout 	<< "FR4G-TP " << this->_name << " ha tirado una granada en dirección a "
				<< target << std::endl;
}

void FragTrap::wizardAttack( std::string const & target )
{
	std::cout 	<< "FR4F-TP " << this->_name << " lanza un ataque magico a "
				<< target << std::endl;
}

void FragTrap::boxAttack( std::string const & target )
{
	std::cout 	<< "FR4G-TP " << this->_name << " ha plantado una bomba cerca de "
	   			<< target << std::endl;	
}
