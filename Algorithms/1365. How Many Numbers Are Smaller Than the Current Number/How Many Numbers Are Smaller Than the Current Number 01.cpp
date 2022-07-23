class Solution
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        vector<int> ret;
        if (nums.size() >= 2 && nums.size() <= 500)
        {
            for (int i = 0; i < nums.size(); i++)
            {
                int count = 0;
                for (int j = 0; j < nums.size(); j++)
                {
                    if (i == j)
                    {
                        continue;
                    }
                    if (nums[j] < nums[i])
                    {
                        count = count + 1;
                    }
                }
                ret.push_back(count);
            }
        }
        return ret;
    }
};