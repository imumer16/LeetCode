class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        std::cout << std::fixed << std::setprecision(5);
        for (int i = 0; i < nums2.size(); i++)
        {
            nums1.push_back(nums2[i]);
        }

        sort(nums1.begin(), nums1.end());
        int n = nums1.size();

        if (n % 2 != 0)
        { // n is even

            return nums1[n / 2];
        }
        else
        { // n is odd
            int temp = n / 2;
            return (double)(nums1[temp - 1] + nums1[temp]) / 2;
        }
    }
};