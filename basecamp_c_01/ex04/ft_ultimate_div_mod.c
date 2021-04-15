/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 15:50:20 by gandrade          #+#    #+#             */
/*   Updated: 2021/04/07 18:54:29 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int d;
	int m;

	if (*b != 0)
	{
		d = (*a / *b);
		m = (*a % *b);
		*a = d;
		*b = m;
	}
}