class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        if (n % 2 == 0)
        {
            for (int i = 1; i <= (sqrt(n)) + 1; i++)
            {
                if (pow(2, i) == n)
                {
                    return true;
                }
            }
        }

        if (n == 1)
            return true;

        return false;
    }
};
