/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanraman <fanraman@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 09:45:47 by fanraman          #+#    #+#             */
/*   Updated: 2024/11/16 16:21:37 by fanraman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void creat_array(char **cara, int *tab1, int *tab2, int *tab3, int *tab4);

void rush(char **cara)
{
	int tab1[4];
	int tab2[4];
	int tab3[4];
	int tab4[4];

	creat_array(cara, tab1, tab2, tab3, tab4);
	
}

void creat_array(char **cara, int *tab1, int *tab2, int *tab3, int *tab4)
{
	int i;
	int a;

	a = 0;
	i = 0;
	while (i <= 3)
	{
		tab1[i] = cara[1][a] - 48;
		tab2[i] = cara[1][a + 8] - 48;
		tab3[i] = cara[1][a + 16] - 48;
		tab4[i] = cara[1][a + 24] - 48;
		i++;
		a += 2;
	}
	i = 0;
	/*while (i <= 3)
	{
		printf("%d ",tab1[i]);
		i++;
	}*/
}

int check_error(int nb, char **cara)
{
	int i;
	int tab[16];

	i = 0;
	if (nb != 2)
        return (0);
    while(cara[1][i] != '\0')
    {
        if (!(cara[1][i] >= '1' && cara[1][i] <= '4' || cara[1][i] == 32))
            return (0);
        i++;
    }
    if (i != 31)
            return (0);
	i = 0;
	return (1);
}
