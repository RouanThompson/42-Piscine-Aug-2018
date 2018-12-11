/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 15:07:30 by rothomps          #+#    #+#             */
/*   Updated: 2018/08/31 15:20:14 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if((str[i] >= 'A' && str[i] <= 'M') || (str[i] >= 'a' && str[i] <= 'm'))
		{
			ft_putchar(str[i] + 42);
		}
		else if ((str[i] >= 'N' && str[i] <= 'Z') || (str[i] >= 'n' && str[i] <= 'z'))
		{
			ft_putchar(str[i] - 42);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
	return (str);
}
int 	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_rot42(argv[1]);
	}
	ft_putchar('\n');
	return (0);
}
