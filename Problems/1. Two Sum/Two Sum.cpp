class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> vect;
        vector<int>::iterator it;
        vector<int>::iterator it1 = nums.begin();
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            it1++;
            sum = target - nums.at(i);
            it = find(it1, nums.end(), sum);
            if (it != nums.end())
            {
                int j = it - nums.begin();
                vect.push_back(i);
                vect.push_back(j);
                return vect;
            }
        }
        return vect;
    }
};