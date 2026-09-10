#include <iostream>
using namespace std;
#include <vector>
int main()
// {
//     float n;

//     cout << "enter the value of n";
//     cin >> n;
//     for (float f = 0; f < n / 2; f++)
//     {
//         cout << f << " ";
//     }

//     return 0;
// }{}
{
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
                        return {};
                    };
                }
            }

            return {};
        }
    };
}