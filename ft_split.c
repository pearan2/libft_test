/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 17:14:08 by honlee            #+#    #+#             */
/*   Updated: 2021/12/15 16:19:15 by honlee           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c);
char **ft_split2(char const *s, char c, char **str);
char **get_word(char const *s, char c);
int get_len(char const *str, char c);

char **ft_split(char const *s, char c)
{
	char **str;

	if (!s)
		return (0);
	str = get_word(s, c);
	if (!str)
		return (0);
	str = ft_split2(s, c, str);
	if (!str)
		return (0);
	return (str);
}
char **ft_split2(char const *s, char c, char **str)
{
	int j;
	int k;
	int len;
	j = 0;
	len = get_len(s, c);
	while (*s)
	{
		if (*s != c)
		{
			k = 0;
			str[j] = (char *)malloc(sizeof(char) * (len + 1));
			if (!str[j])
				return (0);
			while (*s != c && *s)
				str[j][k++] = *s++;
			str[j++][k] = '\0';
		}
		else
			s++;
	}
	str[j] = 0;
	return (str);
}
char **get_word(char const *s, char c)
{
	int i;
	int word;
	char **str;
	i = 0;
	word = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i])
		{
			word++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	str = (char **)malloc(sizeof(char *) * (word + 1));
	if (!str)
		return (0);
	return (str);
}
int get_len(char const *s, char c)
{
	int len;
	len = 0;
	while (s[len] != c && s[len])
		len++;
	return (len);
}
