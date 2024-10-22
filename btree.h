#include <iostream>
#include <set> // --> Libreria para utilizar arboles

struct Node {
  int data;
  Node* left;
  Node* right;
  Node(int val) : data(val), left(nullptr), right(nullptr) {}
};
