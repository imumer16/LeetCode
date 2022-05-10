
class Solution
{
public:
    int subtractProductAndSum(int n)
    {
        int product = 1, sum = 0;
        vector<int> nums;

        while (n > 0)
        {
            int i = n % 10;
            nums.push_back(i);
            n = n / 10;
        }
        for (size_t i = 0; i < nums.size(); ++i)
        {
            product = product * nums.at(i);
            sum = sum + nums.at(i);
        }

        return product - sum;
    }
};