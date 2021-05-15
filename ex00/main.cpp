/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 15:46:17 by migferna          #+#    #+#             */
/*   Updated: 2021/05/15 18:32:12 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	srand(time(NULL));
	FragTrap tp1("Marvin");
	FragTrap tp2("Megatron");

	tp1.meleeAttack("minion");
	tp2.takeDamage(20);
	tp2.rangedAttack("minion");
	tp1.takeDamage(10);
	tp1.beRepaired(42);
	tp2.takeDamage(142);
	tp1.beRepaired(100);
	tp2.beRepaired(100);

	tp1.vaulthunter_dot_exe("minion");
	tp1.vaulthunter_dot_exe("minion");
	tp1.vaulthunter_dot_exe("minion");
	tp1.vaulthunter_dot_exe("minion");
	tp1.vaulthunter_dot_exe("minion");
	tp2.vaulthunter_dot_exe("minion");
	tp2.vaulthunter_dot_exe("minion");
	return (0);
}
