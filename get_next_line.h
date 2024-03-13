/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfararan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:25:53 by nfararan          #+#    #+#             */
/*   Updated: 2024/03/13 13:42:17 by nfararan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>

unsigned int	ft_strlen(const char *s);
char			*ft_strjoin(const char *s1, const char *s2);
char			*ft_strchr(const char *s, char c);
char			*get_next_line(int fd);

#endif
