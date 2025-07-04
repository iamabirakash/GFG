/*  Tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

// Should return true if tree is Sum Tree, else false
class Solution {
  public:
    bool isSumTree(Node* root) {
        // Your code here
        if(root==NULL || (root->left == NULL && root->right==NULL)) return true;
        // return isSumTree(root->left)+isSumTree(root->right);
        int l = sum(root->left);
        int r = sum(root->right);
        
        if(root->data!=l+r) return false;
        
        return isSumTree(root->left) && isSumTree(root->right);
    }
    int sum(Node* node) {
        if (node == NULL)
            return 0;
        return node->data + sum(node->left) + sum(node->right);
    }
};
