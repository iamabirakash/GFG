[Generate all binary strings](https://www.geeksforgeeks.org/problems/generate-all-binary-strings/1)
Difficulty: MediumAccuracy: 63.9%Submissions: 26K+Points: 4Average Time: 20m
Given an integer N , Print all binary strings of size N which do not contain consecutive 1s.

A binary string is that string which contains only 0 and 1.

Example 1:

Input:
N = 3
Output:
000 , 001 , 010 , 100 , 101
Explanation:
None of the above strings contain consecutive 1s. "110" is not an answer as it has '1's occuring consecutively. 
Your Task:

You don't need to read input or print anything. Your task is to complete the function generateBinaryStrings() which takes an integer N as input and returns a list of all valid binary strings in lexicographically increasing order.

Expected Time Complexity: O(2N)
Expected Auxiliary Space: O(N)

Constraints:
