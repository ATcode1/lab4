#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "lab4.h"
#include "doctest.h"

TEST_CASE("Different linked list"){
    struct node* list = different_linked_list(16);
    struct node* temp_pointer = list;

    for(int i = 14; i > 0; i--){
        CHECK(temp_pointer->jumper->number == 15);
        CHECK(temp_pointer->number == i);
        temp_pointer = temp_pointer->next;
    }

    SUBCASE("Test 2"){
        struct node * list2 = different_linked_list(10);
        struct node * temp = list2;
        struct node * list_ptr = list2;
	
        for(int i = 8; i > 0; i--){
            CHECK(list_ptr->number == i);
            list_ptr = list_ptr->next;
	}
    }

    SUBCASE("Test 3"){
	    struct node * list = different_linked_list(16);
	    struct node * list2 = different_linked_list(10);

	    CHECK(sum_values_in_linked_list(list, 15) == 105);
	    CHECK(delete_linked_list(list, 10) == 10);

	    CHECK(sum_values_in_linked_list(list2, 10) == 45);
	    CHECK(delete_linked_list(list2, 5) == 5);
	}
}
