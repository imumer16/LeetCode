class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int Size = nums.size();

        int *arr = nums.data();

        for (int i = 0; i < Size; i++)
        {
            cout << " " << arr[i];
        }

        for (int i = 0; i < Size; i++)
        {
            int j;
            for (j = 0; j < Size; j++)
                if (i != j && arr[i] == arr[j])
                    break;
            if (j == Size)
                return arr[i];
        }
        return -1;
    }
};