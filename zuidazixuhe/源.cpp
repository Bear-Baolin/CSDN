#include <iostream>
#include<vector>

using namespace std;

void findMaxsubArray(vector<int> nums)
{
	int len = nums.size();
	int sum = 0;
	int max_sum = INT_MIN;
	if (len == 1)
	{
		cout << "��������кͣ�" << nums.at(0);
	}

	for (int i = 0; i < len; i++)
	{
		if (sum < 0)
		{
			sum = nums[i];
		}
		else
		{
			sum += nums[i];
		}
		max_sum = max(sum, max_sum);
	}
	cout << "��������У�" << max_sum;
}

int main()
{
	int b;
	vector<int> nums;
	cout << "��������������" << endl;
	while (cin >> b)
	{
		if (cin.get() == '\n')
		{
			break;
		}
		nums.push_back(b);
	}
	findMaxsubArray(nums);
}