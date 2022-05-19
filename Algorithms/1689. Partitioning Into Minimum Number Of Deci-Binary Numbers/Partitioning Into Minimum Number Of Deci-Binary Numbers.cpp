class Solution
{
public:
    int minPartitions(string n)
    {
        char x = n[0];
        for (size_t i = 0; i < n.length(); i++)
        {
            if (n[i] >= x)
            {
                x = n[i];
            }
        }
        return int(x) - 48;
    }
};