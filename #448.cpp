class Solution
{
  private:
    void swap(int &a, int &b)
    {
        int temp;
        temp = a;
        a = b;
        b = temp;
    }

  public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        vector<int> ans;
        int pos = 0;
        while (pos < nums.size())
        {
            if (nums[pos] != pos + 1 && nums[pos] != nums[nums[pos] - 1])
                swap(nums[pos], nums[nums[pos] - 1]);
            else if (nums[pos] == nums[nums[pos] - 1])
                pos++;
        }
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] != i + 1)
                ans.push_back(i + 1);
        }
        return ans;
    }
};