#include "lists.h"

/**
 * get_dnodeint_at_index - Locate node in a dlistint_t list.
 * @head: The head of the dlistint_t list.
 * @index: The node to locate.
 *
 * Return: If the node does not exist - NULL.
 *         else - the address of the located node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index != 0 && head != NULL)
	{
		head = head->next;
		index--;
	}

	return (head);
}
