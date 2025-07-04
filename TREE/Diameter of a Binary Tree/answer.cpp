/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* newNode(int val) {
    return new Node(val);
}
*/

class Solution {
  public:
  int sum=0;
    int height(Node* node) {
        if (node == NULL) return 0; 
        int lh = height(node->left);
        int rh = height(node->right); 
        sum = max(sum, lh + rh);
        return 1 + max(lh, rh);
    }  
    int diameter(Node* root) {
        height(root);
        return sum;
    }
};
