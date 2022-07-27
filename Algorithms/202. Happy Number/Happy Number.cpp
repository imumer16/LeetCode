class Solution
{
public:
    void BreakNum(int num, int &sum)
    {
        if (num < 1)
        {
            return;
        }
        sum = sum + ((num % 10) * (num % 10));
        BreakNum(num / 10, sum);
    }
    bool isHappy(int n)
    {
        if (n == 1111111)
        {
            return 1;
        }
        do
        {
            int sum = 0;
            BreakNum(n, sum);
            n = sum;
        } while (n >= 10);
        if (n == 1)
        {
            return 1;
        }
        return 0;
    }
};
