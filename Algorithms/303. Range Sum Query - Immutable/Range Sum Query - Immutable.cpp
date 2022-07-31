class NumArray
{
private:
    vector<int> num;

public:
    NumArray(vector<int> &nums)
    {
        num = nums;
    }

    int sumRange(int left, int right)
    {
        int ret = 0;
        for (int i = left; i <= right; i++)
        {
            ret = ret + num[i];
        }
        return ret;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */