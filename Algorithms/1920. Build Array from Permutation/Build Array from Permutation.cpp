class Solution
{
public:
    vector<int> buildArray(vector<int> &nums)
    {
        int *arr = new int[nums.size()];

        for (size_t i = 0; i < nums.size(); i++)
        {
            arr[i] = nums.at(i);
        }

        vector<int> ret;

        for (size_t i = 0; i < nums.size(); i++)
        {
            ret.push_back(nums.at(arr[i]));
        }
        delete[] arr;
        return ret;
    }
};