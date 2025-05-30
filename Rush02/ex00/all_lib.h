/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_lib.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyrakoto <nyrakoto@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 12:25:04 by nyrakoto          #+#    #+#             */
/*   Updated: 2024/11/24 15:28:40 by syandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALL_LIB_H
# define ALL_LIB_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

void		ft_strstr(char *str, char *to_find);

void		ft_hundred(char *c, char *nb, int powered);

void		ft_hundred1(char *c, char *nb, int powered);

void		ft_ten_en(char *c, char *nb, int powered);

void		ft_unity(char *c, char *nb, int powered);

void		ft_ten_power(int i, char *c);

void		ft_write(char *nb, char *c);

void		ft_ten_sup_one(char *c, char *nb, int powered);

void		ft_write_loop(char *c, char *news, char *tab, int powered);

char		*ft_strcat(char *dest, char *src);

char		*ft_atoi_num(char *str);

char		*ft_div(char *nb);

int			ft_is_zero(char *nb);

int			ft_strlen(char *nb);

#endif
