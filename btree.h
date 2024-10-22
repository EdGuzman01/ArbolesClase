#include <iostream>
#include <set> // --> Libreria para utilizar arboles

struct Node {
  int data;
  Node* left;
  Node* right;
  Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

class BTree {
public:
  BTree();
  ~BTree();
  
  void insert(int value);
  bool search(int value);
  void remove(int value); 

private:
  Node* root;

  Node* insert(Node* node, int value);
  Node* search(Node* node, int value);
  Node* remove(Node* node, int value);
  Node* findMin(Node* node);
  void destroyTree(Node* node);
};