/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 01:19:12 by lambrozi          #+#    #+#             */
/*   Updated: 2019/12/06 17:34:07 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int div;

	if (nb <= 1 || nb > 2147483647)
		return (0);
	div = 2;
	while (div <= nb / div)
	{
		if (nb % div == 0)
			return (0);
		div++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) != 1)
		nb++;
	return (nb);
}
