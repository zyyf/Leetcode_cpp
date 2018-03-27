class Solution
{
  public:
    vector<vector<int>> imageSmoother(vector<vector<int>> &M)
    {
        vector<vector<int>> m(M.size(), vector<int>(M[0].size()));
        for (auto i = 0; i < M.size(); ++i)
        {
            for (auto j = 0; j < M[i].size(); ++j)
            {
                int sum = M[i][j];
                int count = 1;
                if (i > 0)
                {
                    sum += M[i - 1][j];
                    count++;
                    if (j > 0)
                    {
                        sum += M[i - 1][j - 1];
                        count++;
                    }
                    if (j < M[i].size() - 1)
                    {
                        sum += M[i - 1][j + 1];
                        count++;
                    }
                }
                if (i < M.size() - 1)
                {
                    sum += M[i + 1][j];
                    count++;
                    if (j > 0)
                    {
                        sum += M[i + 1][j - 1];
                        count++;
                    }
                    if (j < M[i].size() - 1)
                    {
                        sum += M[i + 1][j + 1];
                        count++;
                    }
                }
                if (j > 0)
                {
                    sum += M[i][j - 1];
                    count++;
                }
                if (j < M[i].size() - 1)
                {
                    sum += M[i][j + 1];
                    count++;
                }
                m[i][j] = floor(sum / count);
            }
        }
        return m;
    }
};