/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyrakoto <nyrakoto@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:01:28 by nyrakoto          #+#    #+#             */
/*   Updated: 2024/11/27 15:24:10 by nyrakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_str(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		len;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_stlen(str[i]);
		i++;
	}
	if (size <= 0)
		len = 1;
	str = malloc(sizeof(char) * len);
	if (!(str))
		return (0);
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	str = ft_str(size, strs, sep);
	i = -1;
	k = 0;
	while (i++ < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			str[k++] = strs[i][j++];
	}
	j = 0;
	while (sep[j] && i != size - 1)
		str[k++] = sep[j++];
	str[k] = '\0';
	return (str);
}
