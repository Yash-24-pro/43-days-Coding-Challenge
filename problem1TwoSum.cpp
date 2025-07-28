/* Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order. */

#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    return {i, j};
                }
            }
        }
        return {};
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {2, 7, 11, 15}; // ✅ Input array
    int target = 9;                    // ✅ Target sum

    vector<int> result = solution.twoSum(nums, target);

    if (!result.empty())
    {
        cout << "Indices: [" << result[0] << ", " << result[1] << "]" << endl;
    }
    else
    {
        cout << "No solution found." << endl;
    }

    return 0;
}
