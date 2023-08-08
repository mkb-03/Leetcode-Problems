class Solution {
public:
    int search(vector<int>& nums, int target) {

        int index = -1;
        for(int i = 0; i< nums.size(); i = i * 1)
        {
            if(nums[i] == target)
            {
               
                index = i;
                break;
            }

            i++;
        }

        if(index >= 0)
        {
            return index;
        }

        else
        {
            return -1;
        }
    }
};