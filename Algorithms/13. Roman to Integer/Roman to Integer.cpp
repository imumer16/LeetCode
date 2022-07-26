class Solution
{

public:
    int romanToInt(string s)
    {
        int ret = 0;
        if (s.length() >= 1 && s.length() <= 15)
        {
            map<char, int> mp{
                {'I', 1},
                {'V', 5},
                {'X', 10},
                {'L', 50},
                {'C', 100},
                {'D', 500},
                {'M', 1000}};

            int i = 0;
            while (i < s.size())
            {
                if (i < s.size() - 1)
                {
                    if (mp.at(s[i]) >= mp.at(s[i + 1]))
                    {
                        ret = ret + mp.at(s[i]);
                    }
                    else
                    {
                        ret = ret + (mp.at(s[i + 1]) - mp.at(s[i]));
                        i++;
                    }
                }
                else
                {
                    ret = ret + mp.at(s[i]);
                }
                i++;
            }
        }

        return ret;
    }
};