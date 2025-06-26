/* Link list Node
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    /* Function to delete a node from a linked list */
    Node* deleteNode(Node* head, int x) {
        // code here
        Node* temp = head;
        if(x==1){
            head = head->next;
            delete temp;
            return head;
        }
        int cnt=1;
        Node* prev = head;
        while(temp!=NULL && cnt!=x){
            prev = temp;
            temp = temp->next;
            cnt++;
        }
        prev->next = temp->next;
        delete temp;
        return head;
    }
};
