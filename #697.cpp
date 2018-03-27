class Solution
{
  private:
    int getSubArrayLength(vector<int> &nums, int num)
    {
        int beginPos = 50000, endPos = -1;
        for (auto i = 0; i < nums.size(); ++i)
        {
            if (nums[i] == num && i < beginPos)
            {
                beginPos = i;
            }
            if (nums[i] == num && i > endPos)
            {
                endPos = i;
            }
        }
        return endPos - beginPos + 1;
    }

  public:
    int findShortestSubArray(vector<int> &nums)
    {
        vector<int> flag(50000, 0);
        for (auto num : nums)
        {
            flag[num]++;
        }
        int max = 0;
        for (auto i : flag)
        {
            if (i > max)
                max = i;
        }
        vector<int> maxNum;
        for (auto i = 0; i < flag.size(); ++i)
        {
            if (flag[i] == max)
                maxNum.push_back(i);
        }
        int min = 50000;
        for (auto num : maxNum)
        {
            int length = getSubArrayLength(nums, num);
            if (length < min)
                min = length;
        }
        return min;
    }
};