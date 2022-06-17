class Solution
{
public:
    int strStr(string haystack, string needle)
    {

        int M = haystack.length();
        int N = needle.length();

        for (int i = 0; i <= N - M; i++)
        {
            int j;

            for (j = 0; j < M; j++)
                if (needle[i + j] != haystack[j])
                    break;

            if (j == M)
                return i;
        }

        return -1;
    }
};