class Solution
{
  public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int count = 0, maxOne = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] == 1)
            {
                count++;
            }
            if (nums[i] == 0)
            {
                if (count > maxOne)
                {
                    maxOne = count;
                }
                count = 0;
            }
        }
        if (maxOne < count)
            maxOne = count;
        return maxOne;
    }
};