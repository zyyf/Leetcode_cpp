class Solution
{
  private:
    void swap(int &a, int &b)
    {
        int temp;
        a = temp;
        a = b;
        b = temp;
    }

  public:
    void moveZeroes(vector<int> &nums)
    {
        int pos1 = -1, pos2 = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] == 0)
            {
                pos1 = i;
                pos2 = i + 1;
                break;
            }
        }
        if (pos1 == -1)
            return;
        while (pos2 < nums.size())
        {
            if (nums[pos2] != 0)
            {
                swap(nums[pos1], nums[pos2]);
                pos1++;
            }
            pos2++;
        }
    }
};