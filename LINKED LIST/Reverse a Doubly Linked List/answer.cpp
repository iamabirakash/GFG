/*
class DLLNode {
  public:
    int data;
    DLLNode *next;
    DLLNode *prev;

    DLLNode(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/
class Solution {
  public:
    // Function to reverse a doubly linked list
    DLLNode* reverseDLL(DLLNode* head) {
        // Your code here
        if(head==NULL || head->next==NULL){
            return head;
        }
        DLLNode* temp = head;
        DLLNode* pre = NULL;
        DLLNode* post = NULL;
        while(temp){
            pre = temp->next;
            temp->next = post;
            temp->prev = pre;
            post = temp;
            temp = pre;
        }
        return post;
    }
};
