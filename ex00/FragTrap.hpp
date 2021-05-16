/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 18:50:28 by migferna          #+#    #+#             */
/*   Updated: 2021/05/16 17:24:43 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_CLASS_H
# define FRAG_TRAP_CLASS_H

# include <iostream>
# include <time.h>

class FragTrap
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
	void			oneShotAttack( std::string const & target );
	void 			laserAttack( std::string const & target );
	void 			torgueAttack( std::string const & target );
	void 			wizardAttack( std::string const & target );
	void 			boxAttack( std::string const & target );
public:
	FragTrap( void );
	FragTrap( FragTrap const & orig);
	FragTrap( std::string const & name );
	virtual ~FragTrap( void );
	FragTrap &operator=( const FragTrap & orig );
	void rangedAttack( std::string const & target );
	void meleeAttack( std::string const & target );
	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );
	void vaulthunter_dot_exe( std::string const & target );
};

#endif
