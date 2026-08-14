class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int num = nums.size();
        for(int i = 0; i<num;i++){
            if(nums[i]>nums[(i+1)%num]){
                count++;
                 }
           }
        return count<=1;
       
    }
};