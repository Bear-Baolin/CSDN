#include <iostream>
#include <vector>
using namespace std;
void solution(vector<string> words,int maxwidth)
{
	int len = words.size();
	int width = 0;
	string a;
	for (int i = 0; i < len; i++)
	{
		width =width + words.at(i).length();
		if(width>Max)
	}
}

int main()
{
	vector<string> words;
	int maxwidth;
	string a;
	cout << "请输入排版的单词组" << endl;
	while (cin >> a)
	{
		if (cin.get() == '\n')
		{
			break;
		}
		words.push_back(a);
	}
	cout << "请输入每一行的最大值" << endl;
	cin >> maxwidth;

}