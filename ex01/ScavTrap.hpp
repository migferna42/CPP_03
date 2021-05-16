/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 18:50:28 by migferna          #+#    #+#             */
/*   Updated: 2021/05/16 17:25:34 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_CLASS_H
# define SCAV_TRAP_CLASS_H

# include <iostream>
# include <time.h>

class ScavTrap
{
	unsigned int	_hit_points;
	unsigned int	_max_hit_points;
	unsigned int	_energy_points;
	unsigned int	_max_energy_points;
	unsigned int	_level;
	std::string		_name;
	unsigned int	_melee_attack_damage;
	unsigned int	_ranged_attack_damage;
	unsigned int	_armor_damage_reduction;
	void 			flipChallenge( std::string const & target );
	void 			iceChallenge( std::string const & target );
	void 			mannequinChallenge( std::string const & target );
	void			botleCapChallenge( std::string const & target );
	void			tenYearChallenge( std::string const & target );
public:
	ScavTrap( void );
	ScavTrap( ScavTrap const & orig);
	ScavTrap( std::string const & name );
	virtual ~ScavTrap( void );
	ScavTrap &operator=( const ScavTrap & orig );
	void rangedAttack( std::string const & target );
	void meleeAttack( std::string const & target );
	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );
	void challengeNewcomer( std::string const & target );
};

#endif
