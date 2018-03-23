class Solution
{
  private:
    int dfs(vector<vector<int>> &grid, vector<vector<bool>> &is_checked, int r, int c)
    {
        int count = 1;
        int row = grid.size();
        int column = grid[0].size();
        is_checked[r][c] = true;
        if (r - 1 > -1 && grid[r - 1][c] == 1 && !is_checked[r - 1][c])
            count += dfs(grid, is_checked, r - 1, c);
        if (r + 1 < row && grid[r + 1][c] == 1 && !is_checked[r + 1][c])
            count += dfs(grid, is_checked, r + 1, c);
        if (c - 1 > -1 && grid[r][c - 1] == 1 && !is_checked[r][c - 1])
            count += dfs(grid, is_checked, r, c - 1);
        if (c + 1 < column && grid[r][c + 1] == 1 && !is_checked[r][c + 1])
            count += dfs(grid, is_checked, r, c + 1);
        return count;
    }

  public:
    int maxAreaOfIsland(vector<vector<int>> &grid)
    {
        int row = grid.size();
        int column = grid[0].size();
        int max_land = 0;
        vector<vector<bool>> is_checked(row, vector<bool>(column, false));
        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < column; ++j)
            {
                if (grid[i][j] == 1 && !is_checked[i][j])
                {
                    int temp = dfs(grid, is_checked, i, j);
                    if (max_land < temp)
                        max_land = temp;
                }
            }
        }
        return max_land;
    }
};