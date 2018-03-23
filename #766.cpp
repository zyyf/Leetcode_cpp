class Solution
{
  private:
    bool judgeSame(vector<vector<int>> &matrix, int r, int c)
    {
        int row = matrix.size();
        int column = matrix[0].size();
        int temp = matrix[r][c];
        while (r < row && c < column)
        {
            if (matrix[r][c] != temp)
                return false;
            r++;
            c++;
        }
        return true;
    }

  public:
    bool isToeplitzMatrix(vector<vector<int>> &matrix)
    {
        int row = matrix.size();
        int column = matrix[0].size();
        for (int i = 0; i < row; ++i)
        {
            if (!judgeSame(matrix, i, 0))
                return false;
        }
        for (int i = 0; i < column; ++i)
        {
            if (!judgeSame(matrix, 0, i))
                return false;
        }
        return true;
    }
};