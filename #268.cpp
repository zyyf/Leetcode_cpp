class Solution
{
  public:
    int missingNumber(vector<int> &nums)
    {
        vector<int> flag(nums.size() + 1, 0);
        for (auto num : nums)
        {
            flag[num] = 1;
        }
        for (auto i = 0; i < flag.size(); ++i)
        {
            if (flag[i] == 0)
                return i;
        }
    }
};