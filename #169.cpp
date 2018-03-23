class Solution
{
  public:
    int majorityElement(vector<int> &nums)
    {
        map<int, int> count;
        for (int i : nums)
        {
            count[i]++;
        }
        map<int, int>::iterator it = count.begin();
        int maxV = 0;
        int maxi = 0;
        while (it != count.end())
        {
            if (it->second > maxV)
            {
                maxV = it->second;
                maxi = it->first;
            }
            it++;
        }
        return maxi;
    }
};