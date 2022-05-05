class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int K = 0;
        std::vector<int>::iterator it;
        sort(nums.begin(), nums.end());

        for (auto it = nums.begin(); it != nums.end(); ++it)
        {
            if (*it != val)
            {
                K = K + 1;
            }
        }
        remove(nums.begin(), nums.end(), val);
        return K;
    }
};