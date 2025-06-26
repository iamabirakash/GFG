/* Link list Node
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
    Node* sortedMerge(Node* head1, Node* head2) {
        // code here
        if (!head1) return head2;
        if (!head2) return head1;
        Node* head = NULL;
        Node* prev = NULL;
        if (head1->data <= head2->data) {
            head = head1;
            head1 = head1->next;
        } else {
            head = head2;
            head2 = head2->next;
        }
        prev = head;
        while (head1 && head2) {
            if (head1->data <= head2->data) {
                prev->next = head1;
                head1 = head1->next;
            } else {
                prev->next = head2;
                head2 = head2->next;
            }
            prev = prev->next;
        }
        if (head1) prev->next = head1;
        if (head2) prev->next = head2;

        return head;
    }
};
