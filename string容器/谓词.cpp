//һԪν��
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
class MyClass
{
public:
	bool operator()(int val)//�ص�����������ֵbool���ͳ�Ϊ��һ��ν��
	{
		return val > 20;//
	}
private:
	//vector<int>::iterator ret  = find_if(v.begin(),v.end() ,MyClass)//�ص�����
};
void test01()
{
	vector<int>v;
	vector<int>::iterator ret = find_if(v.begin(), v.end(), MyClass())//�ص�����
		//find_if()�ǲ��ҵĺ�������һ���ص��������ǲ��Ҵ���20����
}

void test02()
{
	vector<int>v;

	v.push_back(10);

	sart(v.begin() ,v.end())

}



