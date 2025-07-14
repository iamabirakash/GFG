// User function template for C++

class Solution {
  public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        priority_queue<int> pq;
        for(int num : arr){
            pq.push(num);
        }
        int ele = 0;
        int n = arr.size();
        int last = (n-k)+1;
        while(last--){
            ele = pq.top();
            pq.pop();
        }
        return ele;
    }
};
