/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 23:11:32 by minakim           #+#    #+#             */
/*   Updated: 2019/08/25 20:37:57 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <libft.h>
# include <ctype.h>

typedef struct	s_node {
	int	value;
	struct s_node	*next;
}				t_node;

typedef struct	s_stack {
	struct s_node	*top;
}				t_stack;

typedef struct	s_struct {
	int	min;
	int	max;
	int	mid;
}				t_struct;

typedef struct	s_pivot {
	int	index;
	int	i_value;
	int	left_nbr;
}				t_pivot;

struct s_stack		*initstack(void);
int					isEmpty(struct s_stack *stack);
void				push(struct s_stack *stack, int content);
int					peek(struct s_stack *stack);
int					pop(struct s_stack *stack);
void				print_stack(struct s_stack *stack);
int					isInt(char *str);

void				sa(t_stack *stack);
void				sb(t_stack *stack);
void				ss(t_stack *stack1, t_stack *stack2);
void				pa(t_stack *stack1, t_stack *stack2);
void				pb(t_stack *stack1, t_stack *stack2);
void				ra(t_stack *stack);
void				rb(t_stack *stack);
void				rr(t_stack *a, t_stack *b);

void				rra(t_stack *stack);
void				rrb(t_stack *stack);
void				rrr(t_stack *a, t_stack *b);

void				push_swap(t_stack *a, t_stack *b);
int					check_nbr(t_stack *a);
void				sorting_0(t_stack *a);
void				sorting_1(t_stack *a);
void				sorting_2(t_stack *a, t_stack *b);
void				sorting_3(t_stack *a, t_stack *b);
t_struct			*init_nbr(void);
t_pivot				*init_pivot(void);
void				check_value(t_stack *a, t_struct *nbr);
int					find_index(t_stack *a, int min);
int					find_min(t_stack *a);
int					find_max(t_stack *a);
void				find_mid(t_stack *a, t_struct *nbr);
int					is_sorted(t_stack *a);
int					find_range(t_struct *nbr, int div);

int					find_bot(t_stack *a);
void				find_pivot(t_stack *a, int *arr, t_pivot *p);
int					*letsSort(int *arr, int n);
int					*insertionSort(t_stack *a);
void				print_stack(struct s_stack *stack);

int					ft_arrlen(int *arr);
void				b_to_a(t_stack *a, t_stack *b, int *arr);

int					my_power(int n);
int					find_npower(int n);
int					*create_arr(int nbr_element);
void				find_pivot2(int *arr, t_pivot *p, int n);
void				chunk_mid(t_stack *stack, int size, t_pivot *p);

int					mid_point(t_stack *s, int n);
int					*insertSort(t_stack *a, int n);
void				chunk_sorting2(t_stack *a, t_stack *b, int n);
void				chunk_sorting(t_stack *a, t_stack *b, int n);
//void	chunk_a_sorting(t_stack *a, t_stack *b, int size);
char				*is_chunk_sorted(t_stack *s, int n);
int					a_to_b(t_stack *a, t_stack *b, int n);
int					count_arr(int n);
void				push_to_a(t_stack *a, t_stack *b, int n);

void				check_3_mid(t_stack *s, t_struct *nbr, int n);
void				check_b_3(t_stack *s, t_struct *nbr, int n);
void				sort_3(t_stack *s, int n);
void				super_fast(t_stack *a, t_stack *b, int n);
int					isInt(char *str);
/*
void	sortedInsert(t_stack *a, int x);
//void	magic(t_stack *a);
void	magic(t_stack *a, t_stack *b);
int		unsortednbr(t_stack *a, t_struct *v);
int		botnbr(t_stack *a);
struct s_struct	*init_struct(void);
//void	evaluate(t_stack *a, t_struct *v);
//void    sort(t_stack *stack);
//void	sortStack(t_stack *a, t_stack *b);
//
*/
#endif
