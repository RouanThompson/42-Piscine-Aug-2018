/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 14:32:16 by rothomps          #+#    #+#             */
/*   Updated: 2018/08/31 01:41:56 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



char	*ft_strdup(char *src)
{
	char *ptr;
	size_t mem_s; //declare space of type size_t

	mem_s = 50; 

	ptr = (char *src)malloc(mem_s); //allocates memory to ptr

	if (ptr == NULL)
	{
		printf("%s", "didnt allocate memory");
		return ;
	}
	else
	{

	}

	//make ft_strcpy 
} 

