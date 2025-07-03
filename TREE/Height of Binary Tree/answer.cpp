/*
class Node {
public:
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
    int height(Node* node) {
        // code here
        if(node == NULL){
            return -1;
        }
        int sum = 0;
        int hl = height(node->left);
        int hr = height(node->right);
        
        sum = 1+max(hl,hr);
        return sum;
    }
};
