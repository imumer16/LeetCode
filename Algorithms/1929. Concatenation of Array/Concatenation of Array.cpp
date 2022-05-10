class Solution
{
public:
    vector<int> getConcatenation(vector<int> &nums)
    {
        vector<int> arr;

        for (size_t i = 0; i < nums.size(); ++i)
        {
            arr.push_back(nums.at(i));
        }

        for (size_t i = 0; i < nums.size(); ++i)
        {
            arr.push_back(nums.at(i));
        }

        return arr;
    }
};