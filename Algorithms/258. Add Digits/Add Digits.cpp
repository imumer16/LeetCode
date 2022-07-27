class Solution
{
public:
	void BreakNum(int num, int &sum)
	{
		if (num < 1)
		{
			return;
		}
		sum = sum + num % 10;
		BreakNum(num/10, sum);
	}

	int addDigits(int num)
	{
		int sum = 0;
		do
		{
			BreakNum(num, sum);
			num = sum;
			sum = 0;
		} while (num >= 10);


		return num;
	}
};