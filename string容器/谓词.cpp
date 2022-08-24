//一元谓词
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
class MyClass
{
public:
	bool operator()(int val)//回调函数，返回值bool类型称为是一个谓词
	{
		return val > 20;//
	}
private:
	//vector<int>::iterator ret  = find_if(v.begin(),v.end() ,MyClass)//回调函数
};
void test01()
{
	vector<int>v;
	vector<int>::iterator ret = find_if(v.begin(), v.end(), MyClass())//回调函数
		//find_if()是查找的函数，加一个回到函数就是查找大于20的数
}

void test02()
{
	vector<int>v;

	v.push_back(10);

	sart(v.begin() ,v.end())

}



