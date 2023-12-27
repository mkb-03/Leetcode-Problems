class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        bool result = false;
        for(int i = 0; i< nums.size(); i++)
        {
            if(nums[i] == target)
            {
                result = true;
                return i;
            }

        }

        for(int j = 0; j < nums.size(); j++)
        {
            if(result == false)
            {
                if(j == nums.size()-1 && target > nums[j] )
                {
                    return j+1;
                }
                else if(target > nums[j] && target < nums[j+1] )
                {
                    return j + 1;
                }

                else if( j == 0 && target < nums[j])
                {
                    return j;
                }
            }

        }

        return nums.size();
    }
};