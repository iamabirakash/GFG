/* Linked List Node structure:

struct Node
{
    int data;
    struct Node *next;
}

*/

class Solution {
  public:
    Node* reverseList(struct Node* head) {
        // code here
        Node* temp = head;
        Node* prev = NULL;
        Node* after = NULL;
        while(temp!=NULL){
            after = temp->next;
            temp->next = prev;
            prev = temp;
            temp = after;
        }
        return prev;
    }
};
