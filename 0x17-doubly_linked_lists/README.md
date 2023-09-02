## 0x17.c - Doubly linked lists
##### This project is about:
* doubly liked lists
* doubly linked lists and it's usage


### Tasks:
#### 0. Print list
	Write a function that prints all the elements of 'dlistint_t' list.
		Prototype: size_t print_dlistint(const dlistint_t *h);
		Return: the number of nodes

#### 1. List lenght
	Write a function that returns the number of elements in a linked dlistint_t list.
		Prototype: size_t dlistint_len(const dlistint_t *h)

#### 2. Add node
	Write a function that adds new node at the begining of a dlistint_t list.
		Prototype: dlistint_t *add_dnodeint(dlistint_t **head, const int n);
		Return: The address of the new element, or NULL if it failed.

#### 3. Add node at the end
	Write a function that adds a new node at the end of dlistint_t list.
		Prototype: dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
		Return: the address of the new element, or NULL if it failed

#### 4. Free list
	Write a function that frees a dlistint_t list.
		Prototype: void free_dlistint(dlistint_t *head);

