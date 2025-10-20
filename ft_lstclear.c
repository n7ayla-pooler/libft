/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnahal <abdnahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 18:08:18 by abdnahal          #+#    #+#             */
/*   Updated: 2025/10/20 18:18:22 by abdnahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *curr;
    t_list *prev;
    
    curr = *lst;
    while (curr->next)
    {
        prev = curr;
        curr = curr->next;
        del(prev->content);
        free(prev);
    }
    *lst = NULL;
}

// Simple delete function
void	del(void *content)
{
	printf("Deleting: %s\n", (char *)content);
	free(content);
}

// Helper to create new string (avoids freeing string literals)
char	*new_str(const char *s)
{
	char *str = malloc(strlen(s) + 1);
	if (str)
		strcpy(str, s);
	return str;
}

int	main(void)
{
	t_list	*lst = NULL;
	t_list	*tmp;

	// Test 1: Normal list
	printf("\n=== TEST 1: Normal list ===\n");
	ft_lstadd_back(&lst, ft_lstnew(new_str("Node1")));
	ft_lstadd_back(&lst, ft_lstnew(new_str("Node2")));
	ft_lstadd_back(&lst, ft_lstnew(new_str("Node3")));

	printf("Before clear, lst size: %d\n", ft_lstsize(lst));
	ft_lstclear(&lst, del);
	printf("After clear, lst = %p\n", (void *)lst);

	// Test 2: Clearing NULL list
	printf("\n=== TEST 2: Clearing NULL list ===\n");
	lst = NULL;
	ft_lstclear(&lst, del);
	printf("No crash expected. lst = %p\n", (void *)lst);

	// Test 3: List with one element
	printf("\n=== TEST 3: Single element ===\n");
	lst = ft_lstnew(new_str("Single"));
	ft_lstclear(&lst, del);
	printf("After clear, lst = %p\n", (void *)lst);

	// Test 4: List with content that doesn't need freeing
	printf("\n=== TEST 4: Static content (no free) ===\n");
	lst = ft_lstnew("Static1");
	ft_lstadd_back(&lst, ft_lstnew("Static2"));
	ft_lstclear(&lst, NULL); // del is NULL, should handle gracefully
	printf("After clear, lst = %p\n", (void *)lst);

	// Test 5: Random pointer safety
	printf("\n=== TEST 5: Double free check ===\n");
	lst = ft_lstnew(new_str("A"));
	tmp = lst;
	ft_lstadd_back(&lst, ft_lstnew(new_str("B")));
	ft_lstclear(&lst, del);
	// tmp now points to freed memory — DO NOT ACCESS
	printf("lst after free: %p\n", (void *)lst);

	return (0);
}