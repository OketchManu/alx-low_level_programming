#include "lists.h"

/**
 * get_nodeint_at_index - return the node at a certain index in a linked list
 * @head: index of the node to return
 * @index: index to the node to return
 * Return: pointer to the node we are looking for, or null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
