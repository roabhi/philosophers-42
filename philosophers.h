/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 20:55:34 by rabril-h          #+#    #+#             */
/*   Updated: 2022/11/29 21:11:59 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H

# include<unistd.h>
# include<stdlib.h>
# include<limits.h>
# include<stdio.h>
# include<fcntl.h>
# include<pthread.h>
# include<sys/time.h>

int		philo(int i, char **params);
void	ft_putnbr_fd(int n, int fd);
void	ft_put_str_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
size_t	ft_strlen(const char *s);

#endif
