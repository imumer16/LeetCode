class Solution
{
public:
    char repeatedCharacter(string s)
    {
        if (s.size() <= 100 && s.size() >= 2)
        {
            map<char, int> m;
            for (int i = 0; i < s.size(); i++)
            {
                m[s[i]]++;
                if (m[s[i]] == 2)
                {
                    return s[i];
                }
            }
        }
        return NULL;
    }
};
