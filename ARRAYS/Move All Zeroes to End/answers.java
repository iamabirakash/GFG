// User function Template for Java

class Solution {
    void pushZerosToEnd(int[] arr) {
        // code here
        int n = arr.length;
        int idx = 0;
        for(int i=0;i<n;i++){
            if(arr[i]!=0)
            arr[idx++] = arr[i];
        }
        while(idx<n){
            arr[idx++] = 0;
        }
    }
}
