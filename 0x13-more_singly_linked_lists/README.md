# Singly linked lists

1. [0-print_listint.c](./0-print_listint.c) - print all elements in the list
```c
size_t print_listint(const listint_t *h);
```
2. [1-listint_len.c](./1-listint_len) - Return the number of elements in the list
```c
size_t listint_len(const listint_t *h);
```
3. [2-add_nodeint.c](./2-add_nodeint.c) - Add a new node to the beginning of the list
```c
listint_t *add_nodeint(listint_t **head, const int n);
```
4. [3-add_nodeint_end.c](./3-add_nodeint_end.c) - Add a new node at the end of the list
```c
listint_t *add_nodeint_end(listint_t **head, const int n);
```
5. [4-free_listint.c](./4-free_listint.c) - free a listint_t list
```c
void free_listint(listint_t *head);
```
6. [5-free_listint2.c](./5-free_listint2.c) - free a listint_t list
```c
void free_listint2(listint_t **head);
```
7. [6-pop_listint.c](./6-pop_listint.c) - Deletes the head/first node of the list and returns the head node's data (n).
```c
int pop_listint(listint_t **head);
```
8. [7-get_nodeint.c](./7-get_nodeint.c) - return the nth node of the list.
```c
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
```
9. [8-sum_listint.c](./8-sum_listint.c) - return the sum of all thte data of the list.
```c
int sum_listint(listint_t *head);
```
10. [9-insert_nodeint.c](./9-insert_nodeint.c) - insert a new node at a given position.
```c
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
```
11. [10-delete_nodeint.c](./10-delete_nodeint.c) -  delete the node at a given index in the list.
```c
int delete_nodeint_at_index(listint_t **head, unsigned int index);
```
