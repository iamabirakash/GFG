// User function Template for C++

/*
class Node{
public:
    Node* prev;
    int data;
    Node* next;

    Node()
    {
        prev = NULL;
        data = 0;
        next = NULL;
    }

    Node(int value)
    {
        prev = NULL;
        data = value;
        next = NULL;
    }
};*/

class Solution {
  public:
    Node* constructDLL(vector<int>& arr) {
        // code here
        int n = arr.size();
        Node* start = nullptr;
        for(int i=n-1;i>=0;i--){
            Node* newNode = new Node(arr[i]);
            newNode->next = start;
            if(start!=nullptr){
                start->prev = newNode;
            }
            start = newNode;
        }
        return start;
    }
};
