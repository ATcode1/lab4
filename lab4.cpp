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
    my_node = my_node->next;

    delete my_node;
    count++;
  }

  return count;
}
