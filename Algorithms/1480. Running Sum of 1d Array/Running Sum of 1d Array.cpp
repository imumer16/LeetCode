class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        vector<int> ret;
        int sum = 0;
        for (size_t i = 0; i < nums.size(); i++)
        {
            if (i == 0)
            {
                ret.push_back(nums.at(i));
                sum = sum + nums.at(i);
                continue;
            }
            sum = sum + nums.at(i);
            ret.push_back(sum);
        }

        return ret;
    }
};