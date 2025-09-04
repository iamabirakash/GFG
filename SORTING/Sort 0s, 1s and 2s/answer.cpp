class Solution {
  public:
    void sort012(vector<int>& arr) {
        int a0=0,a1=0,a2=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0) a0++;
            else if(arr[i]==1) a1++;
            else a2++;
        }
        int index = 0;
        for(int i=0;i<a0;i++){
            arr[index++] = 0;
        }
        for(int i=0;i<a1;i++){
            arr[index++] = 1;
        }
        for(int i=0;i<a2;i++){
            arr[index++] = 2;
        }
        // sort(arr.begin(),arr.end());
    }
};
