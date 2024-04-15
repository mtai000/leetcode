/*
 * @lc app=leetcode.cn id=15 lang=cpp
 *
 * [15] 三数之和
 */

// @lc code=start


class Solution {
public:

    void swap(int &a, int &b)
    {
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
    }

    vector<int> sortVec(int i , int j , int k)
    {
        if(i > j)
        {
            swap(i,j);
        }
        if(i > k)
        {
            swap(i,k);
        }
        if(j > k)
        {
            swap(j,k);
        }
        vector<int> tmp;
        tmp.push_back(i);
        tmp.push_back(j);
        tmp.push_back(k);
        return tmp;
    }



    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        std::sort(nums.begin(), nums.end());
        vector<vector<int>> vec;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i] > 0)
                return vec;
            
            if(i > 0 && nums[i] == nums[i - 1])
                continue;
            
            int left = i + 1;
            int right = nums.size() - 1;

            while(right > left)
            {
                if(nums[i] + nums[left] + nums[right] > 0) right--;
                else if(nums[i] + nums[left] + nums[right] < 0) left++;
                else
                {
                    vec.push_back(vector<int>{nums[i], nums[left],nums[right]});
                     while (right > left && nums[right] == nums[right - 1]) right--;
                    while (right > left && nums[left] == nums[left + 1]) left++;
                    right--;
                    left++;
                }
            }
        }
        return vec;
    }

/*
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> vec;
        for(int i = 0 ; i < nums.size() - 2 ; i++)
        {
            for(int j = i+1 ; j < nums.size() - 1 ; j++)
            {
                for(int k = j+1; k < nums.size() ; k++)
                {
                    if(nums[i] + nums[j] + nums[k] == 0)
                    {
                        bool duplicate = false;
                        vector<int> tmp = sortVec(nums[i],nums[j],nums[k]);
                        if(vec.size() > 0)
                        for(int i = 0 ; i < vec.size(); i++)
                        {
                            if(vec[i][0] == tmp[0] && vec[i][1] == tmp[1] && vec[i][2] == tmp[2])
                            {
                                duplicate = true;
                            }
                        }  
                        if(!duplicate)
                            vec.push_back(tmp);                   
                    }
                }
            }
        }

        return vec;
    }*/
};
// @lc code=end

