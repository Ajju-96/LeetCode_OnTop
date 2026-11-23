class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxi = nums[0];

        for(int arr : nums){
            sum += arr;
            
            if(sum > maxi){
                maxi = max(sum, maxi);
            }
            if(sum < 0 ){sum = 0;}
        }
        return maxi;
    }
};