class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size()==1) return;
        int curr = 0;
        int temp = 1;
        while(temp<=nums.size()-1){
            if(nums[curr]!=0){
                curr++;
                temp++;
                }
            else if(nums[curr]==0 && nums[temp]!=0){
                swap(nums[curr],nums[temp]);
                curr++;
                temp++;
                }
            else if(nums[curr]==0 && nums[temp]==0){
                temp++;
                }
        }
    }
};
