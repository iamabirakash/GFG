/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution {
  public:
    // Function to check whether the list is palindrome.
    bool isPalindrome(Node *head) {
        // Your code here
        if(head==nullptr){
            return NULL;
        }
        Node* slow = head;
        Node* fast = head;
        // Node* last = NULL;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        Node* curr = slow->next;
        Node* after = NULL;
        Node* prev = NULL;
        while(curr!=NULL){
            after = curr->next;
            curr->next = prev;
            prev = curr;
            curr = after;
        }
        while(prev !=NULL){
            if(head->data != prev->data){
                return false;
            }
            head = head->next;
            prev = prev->next;
        }

        return true;
        
    }
};
