/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jd-halle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 22:33:22 by jd-halle          #+#    #+#             */
/*   Updated: 2024/07/18 22:33:28 by jd-halle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

char	*get_next_line(int fd);
char	*read_and_store(int fd, char *stash);
char	*update_stash(char	*stash, char *buff);
char	*extract_line(char *stash);
char	*trim_stash(char *stash);
int		ft_strlen(char *str);
char	*ft_strcat(char *dest, char *src);
char	*ft_strchr(char *str, int c );
char	*ft_strdup(char *str);
char	*ft_strndup(char *str, int n);

#endif