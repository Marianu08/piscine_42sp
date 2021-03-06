/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 12:30:24 by exam              #+#    #+#             */
/*   Updated: 2019/12/13 12:49:04 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int nbr;
	int signe;
	int i;

	i = 0;
	nbr = 0;
	signe = 1;
	while(str[i] == ' ' || str[i] == '\t')
	{
		i++;
	}
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		signe = -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		nbr = 10 * nbr + (str[i] - 48);
		i++;
	}
	nbr *= signe;
	return (nbr);
}
