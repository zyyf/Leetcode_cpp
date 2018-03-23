class Solution
{
  public:
    bool isOneBitCharacter(vector<int> &bits)
    {
        if (bits.size() == 1)
        {
            return true;
        }
        for (int i = 0; i < bits.size(); ++i)
        {
            if (bits[i] == 1)
            {
                i++;
                if (i == bits.size() - 2)
                    return true;
                else if (i == bits.size() - 1)
                    return false;
                continue;
            }
            if (i == bits.size() - 1)
                return true;
        }
    }
};