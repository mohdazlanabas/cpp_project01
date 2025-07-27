#include <iostream>
#include <map>
#include <string>
#include <unordered_map>
#include <thread>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

};

Node* createnode(int data){
    Node* newNode = new Node();
    newNode -> data = data;
    newNode -> left = newNode -> right = nullptr;
    return newNode;
};

void printTree (Node* root) {

    if (root == nullptr) return;
    
    /* preorder
    cout << root -> data << endl;
    printTree(root -> left);
    printTree(root -> right);
    */
   
    /* Inorder
    printTree(root -> left);
    cout << root -> data << endl;
    printTree(root -> right);
    */

    // postorder
    printTree(root -> left);
    printTree(root -> right);
    cout << root -> data << endl;
   
}

int main () {
    Node* root = createnode(1);
    root -> left = createnode(2);
    root -> right = createnode(3);
    root -> left -> left = createnode(4);
    root -> left -> right = createnode(5);
    root -> right -> left = createnode(6);
    root -> right -> right = createnode(7);
    root -> left -> right -> left = createnode(9);
    root -> right -> right -> left = createnode(15);

    printTree(root);
    return 0;
}