class Solution
{
public:
    int mostWordsFound(vector<string> &sentences)
    {
        vector<int> count;

        for (size_t i = 0; i < sentences.size(); i++)
        {
            int Count = 0;
            string str = sentences[i];
            for (size_t i = 0; i < str.length(); i++)
            {
                if (str[i] == ' ')
                {
                    Count = Count + 1;
                }
            }
            count.push_back(Count);
        }

        return *max_element(count.begin(), count.end()) + 1;
    }
};