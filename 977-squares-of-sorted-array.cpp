class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int start=0,end =nums.size()-1;
        vector<int>v(nums.size());
        int pos = nums.size()-1;
        while(start<=end){
            if(abs(nums[start])<abs(nums[end])){
                v[pos] = nums[end]*nums[end];
                end--;}
            else
            {
                v[pos] = nums[start]*nums[start] ;
                start++;}
            pos--; 
            }
        return v;
    }
        
};
