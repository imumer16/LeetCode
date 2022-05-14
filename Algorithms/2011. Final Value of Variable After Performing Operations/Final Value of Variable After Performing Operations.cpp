class Solution
{
public:
    int finalValueAfterOperations(vector<string> &operations)
    {
        int ret = 0;
        for (size_t i = 0; i < operations.size(); i++)
        {
            if (operations.at(i) == "++X" || operations.at(i) == "X++")
            {
                ret = ret + 1;
            }
            if (operations.at(i) == "--X" || operations.at(i) == "X--")
            {
                ret = ret - 1;
            }
        }
        return ret;
    }
};