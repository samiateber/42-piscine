/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/16 12:52:23 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/16 13:21:09 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strdup(char *src)
{
	char	*str;
	int		i;

	str = (char *)malloc(sizeof(*src));
	i = 0;
	while (c[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	return (str);
}
