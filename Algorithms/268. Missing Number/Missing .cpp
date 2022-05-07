class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int Max = *max_element(nums.begin(), nums.end());
        int X = 0;

        for (int i = 0; i <= Max; i++)
        {
            std::vector<int>::iterator it;
            it = std::find(nums.begin(), nums.end(), i);
            if (it == nums.end())
            {
                X = i;
                break;
            }
            if (i == Max)
            {
                X = Max + 1;
            }
        }

        return X;
    }
};