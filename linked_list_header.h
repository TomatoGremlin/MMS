#pragma once
#include <stdio.h>
#include<stdlib.h>

typedef struct Node {
    long data;
    struct Node *next;
} Node;

void print_ll(Node *head) ;
void push_back(Node **head, long new_data);
void pop_front(Node **head_pp) ;
void pop_back(Node **head_pp) ;

void push_front (Node** head_pp,long new_data);
 
void pop_back (Node **head_pp);
