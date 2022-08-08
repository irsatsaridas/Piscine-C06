/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaridas <isaridas@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 01:37:48 by isaridas          #+#    #+#             */
/*   Updated: 2022/08/04 02:14:35 by isaridas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*(str++))
		write(1, str - 1, 1);
}

int	main(int ac, char **av)
{
	while (ac-- > 1)
	{
		if (av[ac - 1])
		{
			ft_putstr(av[ac]);
			write(1, "\n", 1);
		}
	}
}			
