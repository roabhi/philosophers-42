/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 20:53:45 by rabril-h          #+#    #+#             */
/*   Updated: 2022/11/29 21:12:59 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosophers.h"

int	main(int i, char **params)
{
	(void)params;
	write(1, "\nparams are ", 13);
	ft_putnbr_fd(i-1, 1);
	write(1, "\n", 1);
	return (0);
}
