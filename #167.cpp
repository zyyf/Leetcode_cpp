class Solution
{
  private:
    int find(vector<int> &num, int value, int begin)
    {
        for (int i = begin; i < num.size(); ++i)
        {
            if (num[i] == value)
                return i;
            if (num[i] > value)
                return -1;
        }
        return -1;
    }

  public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int pos;
        vector<int> indices;
        for (int i = 0; i < numbers.size(); ++i)
        {
            if (i > 0 && numbers[i] == numbers[i - 1])
                continue;
            if ((pos = find(numbers, target - numbers[i], i + 1)) != -1)
            {
                indices.push_back(i + 1);
                indices.push_back(pos + 1);
                return indices;
            }
        }
    }
};