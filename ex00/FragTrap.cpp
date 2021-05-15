/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 20:52:17 by migferna          #+#    #+#             */
/*   Updated: 2021/05/15 18:31:19 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void )
		:_hit_points(100), _max_hit_points(100), _energy_points(100),
		_max_energy_points(100), _level(1), _name("Default"),
		_melee_attack_damage(30), _ranged_attack_damage(20),
		_armor_damage_reduction(5)
{
	std::cout << "Un FR4G-TP avistado" << std::endl;
}

FragTrap::FragTrap( std::string const & name)
		:_hit_points(100), _max_hit_points(100), _energy_points(100),
		_max_energy_points(100), _level(1), _name(name),
		_melee_attack_damage(30), _ranged_attack_damage(20),
		_armor_damage_reduction(5)
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

void FragTrap::rangedAttack( std::string const & target )
{
	std::cout 	<< "FR4G-TP " << this->_name << " ataca a " << target
				<< " de lejos, ¡causandole " << this->_ranged_attack_damage
				<< " puntos de daño!" << std::endl; 
}

void FragTrap::meleeAttack( std::string const & target )
{
	std::cout 	<< "FR4G-TP " << this->_name << " ataca a " << target
				<< " de cerca, ¡causandole " << this->_melee_attack_damage
				<< " puntos de daño!" << std::endl; 
}

void FragTrap::takeDamage( unsigned int amount )
{
	std::cout 	<< "FR4G-TP " << this->_name << " va a recibir un daño de "
				<< amount << " pero se protege con su armadura de "
				<< this->_armor_damage_reduction << std::endl;
	amount -= this->_armor_damage_reduction;
	if (amount > this->_hit_points)
		amount = this->_hit_points;
	this->_hit_points -= amount;
	std::cout 	<< "FR4G-TP " << this->_name << " herido con "
				<< amount << " HP. HP restante: "
				<< this->_hit_points << std::endl;
}

void FragTrap::beRepaired( unsigned int amount )
{
	if (amount + this->_hit_points > this->_max_hit_points)
		amount = this->_max_hit_points - this->_hit_points;
	this->_hit_points += amount;
	std::cout 	<< "FR4G-TP " << this->_name << " ha recuperado "
				<< amount << " HP. HP restante: "
				<< this->_hit_points << std::endl;
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
