class Solution
{
  public:
    vector<vector<int>> matrixReshape(vector<vector<int>> &nums, int r, int c)
    {
        int ori_r;
        int ori_c;
        vector<vector<int>> des;
        ori_r = nums.size();
        ori_c = nums[0].size();
        int elem = ori_r * ori_c;
        if (r * c != ori_r * ori_c)
        {
            return nums;
        }
        int count = 0;
        for (int j = 0; j < r; j++)
        {
            vector<int> row;
            for (int k = 0; k < c; k++)
            {
                row.push_back(nums[count / ori_c][count % ori_c]);
                count++;
                if (count == elem)
                    break;
            }
            des.push_back(row);
            if (elem == count)
                break;
        }
        return des;
    }
};