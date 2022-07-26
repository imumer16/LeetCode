class Solution
{
public:
    void BreakNum(vector<int> &x, int num)
    {
        if (num < 1)
        {
            return;
        }

        x.insert(x.begin(), (num % 10));
        BreakNum(x, num / 10);
    }

    int minimumSum(int num)
    {
        if (num >= 1000 && num <= 9999)
        {
            vector<int> x;
            BreakNum(x, num);
            sort(x.begin(), x.end());
            return ((10 * x[0]) + x[3]) + ((10 * x[1]) + x[2]);
        }
        return 0;
    }
};
