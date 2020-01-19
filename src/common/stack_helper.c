/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_helper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 06:40:18 by cacharle          #+#    #+#             */
/*   Updated: 2020/01/19 07:03:32 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.h"

void	stack_swap_2(t_stack *stack_a, t_stack *stack_b)
{
	stack_swap(stack_a);
	stack_swap(stack_b);
}

void	stack_rotate_2(t_stack *stack_a, t_stack *stack_b)
{
	stack_rotate(stack_a);
	stack_rotate(stack_b);
}

void	stack_reverse_rotate_2(t_stack *stack_a, t_stack *stack_b)
{
	stack_reverse_rotate(stack_a);
	stack_reverse_rotate(stack_b);
}

t_bool	stack_empty(t_stack *stack)
{
	return (stack->top == -1);
}

int		stack_length(t_stack *stack)
{
	return (stack->top + 1);
}
