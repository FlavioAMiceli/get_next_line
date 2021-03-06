/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_foreach.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: fmiceli <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/09 20:15:43 by fmiceli       #+#    #+#                 */
/*   Updated: 2019/01/16 18:54:12 by fmiceli       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int len, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < len)
	{
		f(tab[i]);
		i++;
	}
}
