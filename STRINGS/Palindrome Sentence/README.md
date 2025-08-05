[Palindrome Sentence](https://www.geeksforgeeks.org/problems/string-palindromic-ignoring-spaces4723/1?_gl=1*epstwf*_up*MQ..*_gs*MQ..&gclid=Cj0KCQjw18bEBhCBARIsAKuAFEbn_LYvhPCwY7N3jFMZhGj4NQo0V3mL_dODwMyCOE4CYfOoABYaws8aAoI7EALw_wcB&gbraid=0AAAAAC9yBkDGo0Ye4oC0bRSAp6EvROF22)
Difficulty: EasyAccuracy: 50.04%Submissions: 36K+Points: 2
Given a single string s, the task is to check if it is a palindrome sentence or not.
A palindrome sentence is a sequence of characters, such as word, phrase, or series of symbols that reads the same backward as forward after converting all uppercase letters to lowercase and removing all non-alphanumeric characters (including spaces and punctuation).

Examples:

Input: s = "Too hot to hoot"
Output: true
Explanation: If we remove all non-alphanumeric characters and convert all uppercase letters to lowercase, string s will become "toohottohoot" which is a palindrome.
Input: s = "Abc 012..## 10cbA"
Output: true
Explanation: If we remove all non-alphanumeric characters and convert all uppercase letters to lowercase, string s will become "abc01210cba" which is a palindrome.
Input: s = "ABC $. def01ASDF"
Output: false
Explanation: The processed string becomes "abcdef01asdf", which is not a palindrome.
Constraints:
1 ≤ s.length() ≤ 106
