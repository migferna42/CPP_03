/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 15:46:17 by migferna          #+#    #+#             */
/*   Updated: 2021/05/15 21:59:49 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	srand(time(NULL));
	FragTrap ft1("Marvin");
	FragTrap ft2("Megatron");
	ScavTrap st1("Eider");
	ScavTrap st2("Santana");

	ft1.meleeAttack("minion");
	ft2.takeDamage(20);
	ft2.rangedAttack("minion");
	ft1.takeDamage(10);
	ft1.beRepaired(42);
	ft2.takeDamage(142);
	ft1.beRepaired(100);
	ft2.beRepaired(100);

	ft1.vaulthunter_dot_exe("minion");
	ft1.vaulthunter_dot_exe("minion");
	ft1.vaulthunter_dot_exe("minion");
	ft1.vaulthunter_dot_exe("minion");
	ft1.vaulthunter_dot_exe("minion");
	ft2.vaulthunter_dot_exe("minion");
	ft2.vaulthunter_dot_exe("minion");

	st1.meleeAttack("minion_urduliz");
	st2.takeDamage(20);
	st2.rangedAttack("minion_urduliz");
	st1.takeDamage(10);
	st1.beRepaired(42);
	st2.takeDamage(142);
	st1.beRepaired(100);
	st2.beRepaired(100);


	st1.challengeNewcomer("minion_urduliz");
	st1.challengeNewcomer("minion_urduliz");
	st1.challengeNewcomer("minion_urduliz");
	st1.challengeNewcomer("minion_urduliz");
	st1.challengeNewcomer("minion_urduliz");
	st2.challengeNewcomer("minion_urduliz");
	st2.challengeNewcomer("minioni_urduliz");
	return (0);
}
