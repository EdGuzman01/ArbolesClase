#ifndef BTREE_H
#define BTREE_H

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int value);
Node* insert(Node* node, int value);
void display(Node* node);
void destroyTree(Node* node);

#endif // BTREE_H
