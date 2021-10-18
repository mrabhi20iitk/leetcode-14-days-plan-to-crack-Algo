class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0,high = nums.size()-1;
        if(nums[nums.size()-1]<target) return nums.size();
        while(low<high){
            int mid = low + (high-low)/2;
            if(nums[mid]==target) return mid;
            if(nums[mid]>target) high = mid;
            else if(nums[mid]<target) low = mid+1;
        }
        return high;
    }
};
