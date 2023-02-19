#ifndef LAB4_H
#define LAB4_H

#include <iostream>

enum {
	NUMBER = 10
};

struct node {
    int number;
    struct node* next;
    struct node* jumper;
};

struct node * build_linked_list(int elements);

struct node * different_linked_list(int elements);

void print_linked_list(struct node* list, int elements);

int delete_linked_list(struct node* list, int index);

int sum_values_in_linked_list(struct node * list, int elements);

struct node * pointer_jumper(struct node * list);

#endif
