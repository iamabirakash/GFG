[Insert a node in a BST](https://www.geeksforgeeks.org/problems/insert-a-node-in-a-bst/1)
Difficulty: EasyAccuracy: 47.15%Submissions: 171K+Points: 2Average Time: 15m
Given a BST(Binary Search Tree) and a key key. If the key is not present in the BST, Insert a new node with a value equal to the key into the BST. If the key is already present in the BST, don't modify the BST. Return the root of the modified BST after inserting the key. 

Note: The generated output contains the in-order traversal of the modified tree.

Examples :

Input: key = 4

Output: 1 2 3 4
Explanation: After inserting the node 4 Inorder traversal will be 1 2 3 4.
Input: key = 4
 
Output: 1 2 3 4 6
Explanation: After inserting the node 4 Inorder traversal of the above tree will be 1 2 3 4 6.
Input: key = 2

Output: 1 2 3 
Explanation: Node with key=2 already present in BST, Inorder traversal will be 1 2 3.
Constraints:
1 <= number of nodes <= 105
1 <= node->data <= 109
1 <= key <= 109
