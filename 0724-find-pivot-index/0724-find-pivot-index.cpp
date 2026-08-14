class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        int totalsum = 0;
        int rightsum = 0;
        int leftsum = 0;

        for(int num : nums)
        {
            totalsum += num;
        }

        for(int i = 0; i < nums.size(); i++)
        {
            rightsum = totalsum - leftsum - nums[i] ;

            if(leftsum == rightsum)
            {
                return i;
            }
            leftsum += nums[i];
        }

        return -1;
        
    }
};