#include "lab4.h"

struct node * build_linked_list(int elements) {
  struct node * linked_list = new node;
  struct node * root = linked_list;

  if(elements == 0){
	  return NULL;
  }

  for( int i = 0; i < elements; i++) {
    root->next = new node;
    root->number = i;
    root = root->next;    
  }
  
  return linked_list;
}

struct node * different_linked_list(int elements) {
	struct node * linked_list = new node;
	int temp;

	linked_list->number = elements - 1;

	node * pointer = linked_list;

	pointer->next = linked_list;
	pointer->jumper = linked_list;

	temp = elements - 1;

	for(int i = 0; i < temp; i++){
		node * linked_list_temp = new node;

		linked_list_temp->number = i;
		linked_list_temp->next = linked_list;
		linked_list_temp->jumper = pointer;

		linked_list = linked_list_temp;
	}

	return linked_list;
}

	

void print_linked_list(struct node * list, int elements) {
  using namespace std;

  struct node * my_node = list;
  for (int i = 0; i < elements; i++) {
    cout << my_node->number << " " << endl;
    my_node = my_node->next;
  }
}

int sum_values_in_linked_list(struct node * list, int elements) {

  int sum = 0;
  
  struct node * my_node = list;
  for (int i = 0; i < elements; i++) {
    sum += my_node->number;
    my_node = my_node->next;
  }

  return sum;
}

int delete_linked_list(struct node * list, int elements) {
  int count = 0;

  struct node * my_node = list;
  for (int i = 0; i < elements; i++) {
    struct node * node = my_node->next;
	
    delete my_node;
    count++;
    my_node = node;
  }

  return count;
}

struct node * pointer_jumper(struct node * list){
	return list->jumper;
}
