/* a Node of the doubly linked list
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

// Function to insert a new node at given position in doubly linked list.
class Solution {
  public:
    // Function to insert a new node at given position in doubly linked list.
    Node *addNode(Node *head, int pos, int data) {
        // code here
        Node* newNode = new Node(data);
        Node* temp = head;
        int cnt = 0;
        while(cnt<pos){
            temp = temp->next;
            cnt++;
        }
        Node* pree = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
        newNode->next = pree;
        if(pree!=NULL){
            newNode->next = pree;
            pree->prev = newNode;
        }
        return head;
    }
};
