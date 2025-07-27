// 1295. Find Numbers with Even Number of Digits

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int findNumbers(vector<int> &nums)
    {
        int count = 0;
        int length = nums.size();

        for (int i = 0; i < length; i++)
        {
            int b = 0;
            int num = nums[i];

            if (num == 0)
            {
                b = 1;
            }
            else
            {
                while (num > 0)
                {
                    num = num / 10;
                    b++;
                }
            }

            if (b % 2 == 0)
            {
                count++;
            }
        }

        return count;
    }
};

int main()
{
    vector<int> nums = {12, 345, 2, 6, 7896};

    Solution sol;
    int result = sol.findNumbers(nums);

    cout << "Count of numbers with even number of digits: " << result << endl;

    return 0;
}
