class Solution {
public:
	int searchInsert(vector<int>& nums, int target) {

		int index = 0;

		auto it = find(nums.begin(), nums.end(), target);

		if (it != nums.end())
		{
			index = it - nums.begin();
			cout << index << endl;
		}
		else {
			cout  << endl;

			for (int i = 0; i < nums.size();i++) {
				if (target < nums.at(i) ) {
					index = i;
					break;
				}

				if (i == nums.size()-1) {
					index = nums.size() + 1;
				}
			}
		}
		return index;
	}
};