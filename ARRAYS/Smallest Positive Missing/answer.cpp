class Solution {
  public:
    int missingNumber(vector<int> &arr) {
        // code here
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int idx = 0;
        int past = 0;
        for(int i=0;i<n;i++){
            if(arr[i]>0 && arr[i]!=past){
                idx++;
                past = arr[i];
            }
            if(arr[i]>0 && arr[i]!=idx) return idx;
        }
    }
};

//---------------------------------------------------------

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int missingNumber(vector<int> &arr) {
    
    sort(arr.begin(), arr.end());
    int res = 1;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == res) 
            res++;
        else if (arr[i] > res) 
            break;
    }
    return res;
}
