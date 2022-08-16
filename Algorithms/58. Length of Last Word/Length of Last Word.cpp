class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        string word;
        int n = 0;

        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] != ' ')
            {
                n = i;
                break;
            }
        }

        for (int i = n; i >= 0; i--)
        {
            if (s[i] != ' ')
            {
                word = word + s[i];
            }
            else
            {
                break;
            }
        }

        return word.size();
    }
};