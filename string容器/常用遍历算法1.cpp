//for_each()排序打印,有返回值
//通常用于遍历，返回遍历的次数
#include <algorithm>
#include <vector>
#include <functional>//bind2nd()
#include <string>
#include <iostream>

using namespace std;
//class MyPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << endl;
//	}
//};
class MyPrint :public binary_function<int, int, void>
{
public:
	void operator()(int val, int start)const;
	{
		cout << val << endl;
	}
};

void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	for_each(v.begin(), v.end(), bind2nd(MyPrint(), 1000));
	//MyPrint print = for_each(v.begin(), v.end(), MyPrint());
	//cout << print << endl;

}
int main()
{
	test01();

	return 0;
}

