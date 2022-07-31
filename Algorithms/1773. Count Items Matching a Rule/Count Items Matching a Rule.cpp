class Solution
{
public:
    int countMatches(vector<vector<string>> &items, string ruleKey, string ruleValue)
    {
        int ret = 0;
        int location = 0;

        if (ruleKey == "color")
        {
            location = 1;
        }
        else if (ruleKey == "name")
        {
            location = 2;
        }

        for (int i = 0; i < items.size(); i++)
        {
            if (items[i][location] == ruleValue)
            {
                ret++;
            }
        }

        return ret;
    }
};