#include "linked_list_header.h"

int main(){
    Node *my_head_1 = NULL;
    push_back(&my_head_1, 100);
    pop_front(&my_head_1);

    push_front (&my_head_1, 123);
    return 0;
}