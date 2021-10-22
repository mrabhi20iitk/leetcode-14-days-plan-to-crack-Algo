class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int curr = 1,temp = numbers.size();
        vector<int> v;
        while(curr<temp){
            if(numbers[curr-1]+numbers[temp-1]==target){
                v.push_back(curr);
                v.push_back(temp);
                return v;
            }
            else if(numbers[curr-1]+numbers[temp-1]>target){
                temp--;
            }
            else{curr++;}
        }
        return v;
        
    }
};
