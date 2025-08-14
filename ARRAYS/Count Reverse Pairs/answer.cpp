class Solution {
public:
    int mergeAndCount(vector<int>& nums, int start, int mid, int end) {
        int count = 0;
        int j = mid + 1;

        // Count reverse pairs
        for (int i = start; i <= mid; i++) {
            while (j <= end && (long long)nums[i] > 2LL * nums[j])
                j++;
            count += (j - (mid + 1));
        }

        // Merge sorted halves
        vector<int> temp;
        temp.reserve(end - start + 1);
        int left = start, right = mid + 1;
        while (left <= mid && right <= end) {
            if (nums[left] <= nums[right])
                temp.push_back(nums[left++]);
            else
                temp.push_back(nums[right++]);
        }
        while (left <= mid) temp.push_back(nums[left++]);
        while (right <= end) temp.push_back(nums[right++]);
        
        // Copy back
        for (int i = 0; i < temp.size(); i++) {
            nums[start + i] = temp[i];
        }

        return count;
    }

    int mergeSort(vector<int>& nums, int start, int end) {
        if (start >= end) return 0;
        int mid = start + (end - start) / 2;
        int count = mergeSort(nums, start, mid) + mergeSort(nums, mid + 1, end);
        count += mergeAndCount(nums, start, mid, end);
        return count;
    }

    int countRevPairs(vector<int>& nums) {
        return mergeSort(nums, 0, nums.size() - 1);
    }
};
