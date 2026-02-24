/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 13:28:22 by luevange          #+#    #+#             */
/*   Updated: 2026/02/18 16:54:46 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"

int		main(void)
{
	int	const				amounts[] = { 42, 54, 957, 432, 1234, 0, 754, 16 };
	int	const				d[] = { 5, 765, 564, 2, 87, 23, 9, 20 };
	int	const				w[] = { 321, 34, 657, 4, 76, 275, 657, 7 };
	int	const				nb = sizeof(amounts) / sizeof(int);
	Account::t				accounts[nb] = {
		Account::t(amounts[0]),
		Account::t(amounts[1]),
		Account::t(amounts[2]),
		Account::t(amounts[3]),
		Account::t(amounts[4]),
		Account::t(amounts[5]),
		Account::t(amounts[6]),
		Account::t(amounts[7]),
	};

	Account::displayAccountsInfos();
	for (int i = 0; i < nb; i++)
		accounts[i].displayStatus();

	for (int i = 0; i < nb; i++)
	{
		accounts[i].makeDeposit(d[i]);
		accounts[i].displayStatus();
	}

	Account::displayAccountsInfos();

	for (int i = 0; i < nb; i++)
	{
		accounts[i].makeWithdrawal(w[i]);
		accounts[i].displayStatus();
	}

	Account::displayAccountsInfos();

	return (0);
}
