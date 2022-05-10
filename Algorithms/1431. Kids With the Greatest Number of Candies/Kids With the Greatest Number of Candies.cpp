class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        vector<bool> arr;

        int Max = *max_element(candies.begin(), candies.end());

        for (size_t i = 0; i < candies.size(); ++i)
        {
            if ((candies.at(i) + extraCandies) >= Max)
            {
                arr.push_back(true);
            }
            else
            {
                arr.push_back(false);
            }
        }

        return arr;
    }
};