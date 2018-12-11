/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 21:40:02 by rothomps          #+#    #+#             */
/*   Updated: 2018/08/28 21:18:24 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int num;
	int neg_counter;

	i = 0;
	num = 0;
	neg_counter = 0;
	while ((str[i] == '\f') ||  (str[i] == '\n') || (str[i] == '\r')
		|| (str[i] == '\t') || (str[i] == '\v') || (str[i] < '0')
		|| (str[i] > '9') || (str[i] == ' '))
	{
		str[i]++;
	}
	if (str[i] == '-')
	{
		neg_counter++;;
	}
	if ((str[i] == '-') || (str[i] == '+'))
	{	
		i++;
	}
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		num = num * 10;
		num = num + str[i] - '0';
	}
	if (neg_counter == 1)
	{
		return (-num);
	}
	else
		return (num);
}

int		main(void)
{
	ft_atoi("	 -123	4242");
	return (0);
}
