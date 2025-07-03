// Function to insert a node in a BST.

/*
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    Node* insert(Node* node, int key) {
        // Your code goes here
        if(node==nullptr){
            node = new Node(key);
        } else if(node->data==key){
            return node;
        } else if(key<=node->data){
            node->left = insert(node->left,key);
        } else {
            node->right = insert(node->right,key);
        }
        return node;
        
    }
};
