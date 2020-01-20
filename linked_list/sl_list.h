/* 
    Filename:   sl_list.h
    Author:     nerd-oreo (Travis Tran)
    Created On: Jan 17, 2020
    Problem:    Header File - Implementation of Singly Linked List
*/
#ifndef SL_LIST_H
#define SL_LIST_H

typedef struct Node {
    void *data;
    Node *next;
} Node;

// SL List operations
void insert(Node *node);
static void _index();

#endif