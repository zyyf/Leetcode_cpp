class Solution
{
  public:
    bool containsDuplicate(vector<int> &nums)
    {
        if (nums.size() == 0)
            return false;
        sort(nums.begin(), nums.end());
        for (vector<int>::iterator it = nums.begin(); it != nums.end() - 1; it++)
        {
            if (*it == *(it + 1))
                return true;
        }
        return false;
    }
};