/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 18:50:28 by migferna          #+#    #+#             */
/*   Updated: 2021/05/09 20:50:24 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_CLASS_H
# define FRAG_TRAP_CLASS_H

#include <iostream>

class FragTrap
{
	unsigned int	_hit_points;
	unsigned int	_max_hit_points;
	unsigned int	_energy_point;
	unsigned int	_max_enery_points;
	unsigned int	_level;
	std::string		_name;
	unsigned int	_melee_attack_damage;
	unsigned int	_ranged_attack_damage;
	unsigned int	_armor_damage_reduction;
public:
					FragTrap(void);
					~FragTrap();
	void			rangedAttack(std::string const &target);
	void			meleeAttack(std::string const &target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
};

#endif
