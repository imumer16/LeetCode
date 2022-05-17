class Solution
{
public:
    vector<int> shuffle(vector<int> &nums, int n)
    {
        vector<int> ret;

        for (size_t i = 0; i < n; i++)
        {
            ret.push_back(nums.at(i));
            ret.push_back(nums.at(i + n));
        }

        return ret;
    }
};