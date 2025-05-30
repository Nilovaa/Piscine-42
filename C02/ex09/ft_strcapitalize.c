/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyrakoto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 13:59:29 by nyrakoto          #+#    #+#             */
/*   Updated: 2024/11/11 21:43:53 by nyrakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	if (str[0] >= 'a' && str[i] <= 'z')
		str[0] -= 32;
	i = 1;
	while (str[i] != '\0')
	{
		if (str[i + 1] >= '0' && str[i + 1] <= '9')
			i++;
		else if ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13)
			|| (str[i] == '-') || (str[i] == '+'))
			str[i + 1] -= 32;
		i++;
	}
	return (str);
}

#include <string.h>
#include <stdio.h>
int main()
{
	char str[] = "aljkshd lakjsdf 7asdf6F -Asdc +Df 2fsfa";
	printf("%s", strCapitalize(str));
	return 0;
}
