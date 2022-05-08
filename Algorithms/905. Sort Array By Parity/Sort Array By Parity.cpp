class Solution
{
public:
	vector<int> sortArrayByParity(vector<int> &nums)
	{
		vector<int> Sort;

		for (size_t i = 0; i < nums.size(); ++i)
		{
			if (nums.at(i) % 2 == 0)
			{
				Sort.push_back(nums.at(i));
			}
		}

		for (size_t i = 0; i < nums.size(); ++i)
		{
			if (nums.at(i) % 2 != 0)
			{
				Sort.push_back(nums.at(i));
			}
		}

		return Sort;
	}
};