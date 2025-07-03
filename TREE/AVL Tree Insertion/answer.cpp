/* The structure of the Node is
struct Node
{
    int data;
    Node *left;
    Node *right;
    int height;
};
*/

class Solution {
  public:
    /*You are required to complete this method */
    int getHeight(Node* root) {
        if (!root) return 0;
        return root->height;
    }
    int getBalance(Node* root) {
        if (!root) return 0;
        return getHeight(root->left) - getHeight(root->right);
    }
    Node* rightRotate(Node* y) {
        Node* x = y->left;
        Node* T2 = x->right;
        x->right = y;
        y->left = T2;
        y->height = 1 + max(getHeight(y->left), getHeight(y->right));
        x->height = 1 + max(getHeight(x->left), getHeight(x->right));

        return x;
    }
    Node* leftRotate(Node* x) {
        Node* y = x->right;
        Node* T2 = y->left;
        y->left = x;
        x->right = T2;
        x->height = 1 + max(getHeight(x->left), getHeight(x->right));
        y->height = 1 + max(getHeight(y->left), getHeight(y->right));

        return y;
    }
    Node* insertToAVL(Node* node, int data) {
        // Your code here
        if(!node){
            Node* newNode = new Node(data);
            newNode->height = 1;
            return newNode;
        } else if(data<node->data){
            node->left = insertToAVL(node->left,data);
        } else if(data>node->data){
            node->right = insertToAVL(node->right,data);
        } else {
            return node;
        }
        
        node->height = 1+max(getHeight(node->left),getHeight(node->right));
        
        int balance = getBalance(node);
        
        if (balance > 1 && data < node->left->data)
            return rightRotate(node);
        if (balance < -1 && data > node->right->data)
            return leftRotate(node);
        if (balance > 1 && data > node->left->data) {
            node->left = leftRotate(node->left);
            return rightRotate(node);
        }
        if (balance < -1 && data < node->right->data) {
            node->right = rightRotate(node->right);
            return leftRotate(node);
        }
        return node;
    }
};
