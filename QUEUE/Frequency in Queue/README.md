[Frequency in Queue](https://www.geeksforgeeks.org/problems/queue-operations/1)
Difficulty: EasyAccuracy: 77.76%Submissions: 40K+Points: 2
The task is to write two functions for a queue, enqueue(k) and findFrequency(k). The first function inserts a given item k and the second function finds frequency of a given item k.

Every test case has two arrays. The first arrays is, insert[] which contains elements to be inserted in the queue. The second array is findFreq[] which contains items whose frequencies need to be found out.
Note:

enqueue(k) will be called for every element k in insert[].
findFrequency(k) will be called for every element k in findFreq[];
Examples:

Input: insert[] = 1 2 3 4 5 2 3 1 , findFreq[] = 1 3 2 9 10
Output: 2 2 2 -1 -1
Explanation:
After inserting 1, 2, 3, 4, 5, 2, 3 and 1 into the queue, frequency of 1 is 2, 3 is 2 and 2 is 2.
Since 9 and 10 are not there in the queue we output -1 for them.
Input: insert[] = 1 2 1 1 1 4 , findFreq[] = 1 5 4 3
Output: 4 -1 1 -1
Explanation:
After inserting 1, 2, 1, 1, 1 and 4 into the queue, frequency of 1 is 4 and that of 4 is 1. 
Since 5 and 3 are not there in the queue we output -1 for them.
