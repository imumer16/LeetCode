class Solution
{

public:
    void loop(long long &rev, int n)
    {
        if (n <= 0)
        {
            return;
        }
        int digit = n % 10;
        rev = (rev * 10) + digit;
        n = n / 10;
        loop(rev, n);
    }

    bool isPalindrome(int x)
    {
        if (x >= 0)
        {
            int n = x;
            long long rev = 0;

            loop(rev, n);
            if (x == rev)
            {
                return true;
            }
        }

        return false;
    }
};