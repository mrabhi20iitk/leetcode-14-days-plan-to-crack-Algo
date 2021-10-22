lass Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.size()==1) return;
        k = k%nums.size();
        vector<int> ans;
        ans = nums;
        int i =0;
        while(i<nums.size()){
            nums[(i+k)%nums.size()] = ans[i];
            i++;
        }
        
    
    }
};
