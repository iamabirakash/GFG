/* Structure of Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/

class Solution {
  public:
    // Function to delete a node at given position.
    Node* deleteNode(Node* head, int x) {
        // Your code here
        Node* temp = head;
        int cnt = 1;
        if(x==1){
            temp->next->prev = NULL;
            head = temp->next;
            return head;
        }
        while(cnt<x-1 && temp->next!=NULL){
            temp = temp->next;
            cnt++;
        }
        Node* newNode = temp->next;
        temp->next = newNode->next;
        if(newNode->next!=NULL){
            newNode->next->prev = temp;
        }
        delete newNode;
        return head;
    }
};
